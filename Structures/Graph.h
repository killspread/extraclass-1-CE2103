//
// Created by dani on 18/9/20.
//

#ifndef EXTRACLASS_1_CE2103_GRAPH_H
#define EXTRACLASS_1_CE2103_GRAPH_H


#include "LinkedList.h"

class Graph {
    int vertices;
    LinkedList verticesList;

    void addVertex(int value);
    void addEdge(int first_value, int second_value, int weight);
};


#endif //EXTRACLASS_1_CE2103_GRAPH_H
