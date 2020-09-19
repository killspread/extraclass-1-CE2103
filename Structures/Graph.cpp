//
// Created by dani on 18/9/20.
//

#include <stdexcept>
#include <iostream>
#include "Graph.h"

Graph::Graph() = default;

void Graph::addVertex(int value) {
    if (!verticesList.exists(value)) {
        verticesList.append(value);
    }
    else {
        std::cout << "Value input for vertex must not be already on the graph.\n";
    }
}

void Graph::addEdge(int first_vertex, int second_vertex, int weight) {
    if (first_vertex != second_vertex) {
        if (verticesList.exists(first_vertex, second_vertex)) {
            for (int i = 0; i < verticesList.getLength(); ++i) {
                //TODO iterate and find the two vertices
                //TODO check if vertex has adjacency list (for both)
                //TODO if not, create adjacency list, add the other vertex with the weight (for both)
                //TODO if yes, check if the other vertex is already included (edge exists) (for both)
                //TODO else, append vertex to list with weight (for both)
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
