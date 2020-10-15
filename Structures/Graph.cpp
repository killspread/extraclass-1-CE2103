//
// Created by dani on 18/9/20.
//

#include <iostream>
#include "Graph.h"


Graph::Graph() {
    vertices_list = new LinkedList();

}

void Graph::addVertex(int value) {
    if (!vertices_list->exists(value)) {
        vertices_list->append(value);
    }
    else {
        std::cout << "Value input for vertex must not be already on the graph.\n";
    }
}

void Graph::addEdge(int first_value, int second_value, int weight) {
    if (first_value != second_value && weight > 0) {
        if (vertices_list->exists(first_value, second_value)) {
            Node* first_vertex;
            Node* second_vertex;
            bool edge_exists;

            for (int i = 0; i < vertices_list->getLength(); ++i) {
                first_vertex = vertices_list->getByData(first_value);
                second_vertex = vertices_list->getByData(second_value);
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

void Graph::floydWarshall() {
    int vertex_number = vertices_list->getLength();

    int infinity = 999999;
    Node* first_vertex;

    // The graph is converted to a matrix, and the matrix used for path reconstruction is made
    for (int i = 0; i < vertex_number; i++) {
        first_vertex = vertices_list->getByIndex(i);
        for (int j = 0; j < vertex_number; j++) {
            if (i == j) {
                floyd_matrix[i][j] = 0;
            }
            else {
                bool exists = first_vertex->getAdjacencyList()->exists(j);
                if (exists) {
                    floyd_matrix[i][j] = first_vertex->getAdjacencyList()->getByData(j)->getWeight();
                    path_matrix[i][j] = j;
                }
                else {
                    floyd_matrix[i][j] = infinity;
                    path_matrix[i][j] = -1;
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
                    path_matrix[i][j] = path_matrix[i][k]; // Path reconstruction modification
                }
            }
        }
    }
}

std::string Graph::shortestRoute(int first_vertex, int second_vertex) {
    LinkedList* path_list = new LinkedList();
    std::string route;

    // Path reconstruction
    if (path_matrix[first_vertex][second_vertex] != -1) {
        path_list->append(first_vertex);
        int tmp = first_vertex;
        while (tmp != second_vertex) {
            tmp = path_matrix[tmp][second_vertex];
            path_list->append(tmp);
        }
        route = path_list->printList(false);
    }
    else {
        route = "No possible route between the chosen vertices.";
    }

    int min_weight = floyd_matrix[first_vertex][second_vertex];

    std::string output = "Route weight = " + std::to_string(min_weight) + "$" + route;
    return output;
}

void Graph::printAdjacencyList(int vertex) {
    ((vertices_list->getByData(vertex))->getAdjacencyList())->printList(true);
}
