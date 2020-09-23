//
// Created by dani on 18/9/20.
//

#include <iostream>
#include "Graph.h"


Graph::Graph() {
    verticesList = new LinkedList();
}

void Graph::addVertex(int value) {
    if (!verticesList->exists(value)) {
        verticesList->append(value);
    }
    else {
        std::cout << "Value input for vertex must not be already on the graph.\n";
    }
}

void Graph::addEdge(int first_value, int second_value, int weight) {
    if (first_value != second_value || weight < 0) {
        if (verticesList->exists(first_value, second_value)) {
            Node* first_vertex;
            Node* second_vertex;
            bool edge_exists;

            for (int i = 0; i < verticesList->getLength(); ++i) {
                first_vertex = verticesList->getByData(first_value);
                second_vertex = verticesList->getByData(second_value);
            }

            if (first_vertex->getAdjacencyList() == nullptr || second_vertex->getAdjacencyList() == nullptr) {
                edge_exists = false;
            }
            else {
                edge_exists = (first_vertex->getAdjacencyList())->exists(second_value);
            }

            if (!edge_exists) {
                first_vertex->getAdjacencyList()->append(second_value, weight);
                second_vertex->getAdjacencyList()->append(first_value, weight);
            }
            else {
                std::cout << "Edge already exists.\n";
            }
        }
        else {
            std::cout << "One or both of the entered vertices don't exist.\n";
        }
    }
    else {
        std::cout << "Vertex inputs must be different from each other and weight must be positive.\n";
    }
}

//TODO check if both values exist on interface
//TODO only execute Floyd once, and reconstruct path everytime asked
int Graph::floydWarshall(int first_value, int second_value) {
    int vertex_number = verticesList->getLength() ;

    int floyd_matrix[vertex_number][vertex_number];
    int path_reconstruct[vertex_number][vertex_number];
    LinkedList pathList = LinkedList();

    int infinity = 999999;
    Node* first_vertex;

    // The graph is converted to a matrix, and the matrix used for path reconstruction is made
    for (int i = 0; i < vertex_number; i++) {
        first_vertex = verticesList->getByIndex(i);
        for (int j = 0; j < vertex_number; j++) {
            if (i == j) {
                floyd_matrix[i][j] = 0;
            }
            else {
                bool exists = first_vertex->getAdjacencyList()->exists(j);
                if (exists) {
                    floyd_matrix[i][j] = first_vertex->getAdjacencyList()->getByData(j)->getWeight();
                    path_reconstruct[i][j] = j;
                }
                else {
                    floyd_matrix[i][j] = infinity;
                    path_reconstruct[i][j] = -1;
                }
            }
        }
    }

    // Actual Flody-Warshall algorithm with path reconstruction modification
    for (int k = 0; k < vertex_number; k++) {
        for (int i = 0; i < vertex_number; i++) {
            for (int j = 0; j < vertex_number; j++) {
                if (floyd_matrix[i][j] > floyd_matrix[i][k] + floyd_matrix[k][j]) {
                    floyd_matrix[i][j] = floyd_matrix[i][k] + floyd_matrix[k][j];
                    path_reconstruct[i][j] = path_reconstruct[i][k]; // Path reconstruction modification
                }
            }
        }
    }

    // Path reconstruction
    if (path_reconstruct[first_value][second_value] != -1) {
        pathList.append(first_value);
        int tmp = first_value;
        while (tmp != second_value) {
            tmp = path_reconstruct[tmp][second_value];
            pathList.append(tmp);
        }
        std::cout << "Route = ";
        pathList.printList(false);
    }
    else {
        std::cout << "No possible route.\n";
    }

    int min_weight = floyd_matrix[first_value][second_value];
    std::cout << "Route weight = " << min_weight << "\n";

    return min_weight;
}

void Graph::printAdjacencyList(int vertex) {
    ((verticesList->getByData(vertex))->getAdjacencyList())->printList(true);
}