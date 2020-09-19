//
// Created by dani on 18/9/20.
//

#ifndef EXTRACLASS_1_CE2103_GRAPH_H
#define EXTRACLASS_1_CE2103_GRAPH_H


#include "LinkedList.h"

/**
 * @brief A class that represents a undirected weighted graph list.
 */
class Graph {
    private:
        LinkedList verticesList;

    public:
        /**
         * @brief Constructor for the LinkedList class.
         * It's a default constructor, it does not initialize any attributes.
         */
        Graph();

        /**
         * @brief Adds a new vertex to the graph.
         * @param value The value that the new vertex will contain. It must not be one that already in the graph.
         */
        void addVertex(int value);
        void addEdge(int first_vertex, int second_vertex, int weight);
};


#endif //EXTRACLASS_1_CE2103_GRAPH_H
