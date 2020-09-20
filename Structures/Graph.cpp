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
    if (first_value != second_value) {
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
        std::cout << "Vertex inputs must be different from each other.\n";
    }
}

void Graph::printAdjacencyList(int vertex) {
    ((verticesList->getByData(vertex))->getAdjacencyList())->printList(true);
}
