//
// Created by dani on 18/9/20.
//

#ifndef EXTRACLASS_1_CE2103_GRAPH_H
#define EXTRACLASS_1_CE2103_GRAPH_H

#include <QtCore/QObject>
#include "LinkedList.h"

/**
 * @brief A class that represents a undirected weighted graph list.
 */
class Graph {
    private:
        LinkedList* vertices_list;
        int floyd_matrix[9][9]{};
        int path_matrix[9][9]{};

    public:

        /**
         * @brief Constructor for the LinkedList class.
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
         * @brief Performs the Floyd-Warshall algorithm and updates the "floyd_matrix" and "path_matrix" attributes.
         */
        void floydWarshall();

        /**
         * @brief Gets the shortest route between two vertices.
         * @param first_vertex The value of the beginning vertex.
         * @param second_vertex The value of the ending vertex.
         * @return A string containing the route order and weight for GUI display.
         */
        std::string shortestRoute(int first_vertex, int second_vertex);

        /**
         * @brief Prints the adjacency list of a vertex.
         * @param vertex The value contained in the vertex whose list will be printed.
         */
        void printAdjacencyList(int vertex);
};


#endif //EXTRACLASS_1_CE2103_GRAPH_H
