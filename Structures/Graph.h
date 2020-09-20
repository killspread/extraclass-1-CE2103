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
//    private:
//        LinkedList* verticesList;

    public:
    LinkedList* verticesList;

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

        /**
         * @brief Adds a new edge to the graph.
         * @param first_value The value contained in the first vertex.
         * @param second_value The value contained in the second vertex.
         * @param weight The weight of the new vertex to be added
         */
        void addEdge(int first_value, int second_value, int weight);

        /**
         * @brief Prints the adjacency list of a vertex.
         * @param vertex The value contained in the vertex whose list will be printed.
         */
        void printAdjacencyList(int vertex);
};


#endif //EXTRACLASS_1_CE2103_GRAPH_H
