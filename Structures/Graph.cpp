//
// Created by dani on 18/9/20.
//

#include <iostream>
#include "Graph.h"

Graph::Graph() {
    verticesList = new LinkedList();
};

void Graph::addVertex(int value) {
    if (!((*verticesList).exists(value))) {
        (*verticesList).append(value);
    }
    else {
        std::cout << "Value input for vertex must not be already on the graph.\n";
    }
}

//void Graph::addEdge(int first_value, int second_value, int weight) {
//    if (first_value != second_value) {
//        if (verticesList.exists(first_value, second_value)) {
//            for (int i = 0; i < verticesList.getLength(); ++i) {
//                Node* first_vertex = verticesList.getByData(first_value);
//                Node* second_vertex = verticesList.getByData(second_value);
//                bool edge_exists;
//
//                if (first_vertex->getAdjacent() == nullptr || second_vertex->getAdjacent() == nullptr) {
//                    edge_exists = false;
//                }
//                else {
//                    edge_exists = (*(first_vertex->getAdjacent())).exists(second_value);
//                }
//
//                if (!edge_exists) {
//
//                }
//                //TODO if not, create adjacency list, add the other vertex with the weight (for both)
//                //TODO if yes, check if the other vertex is already included (edge exists) (for both)
//                //TODO else, append vertex to list with weight (for both)
//            }
//        }
//        else {
//            std::cout << "One or both of the entered vertices don't exist.\n";
//        }
//    }
//    else {
//        std::cout << "Vertex inputs must be different from each other.\n";
//    }
//}
