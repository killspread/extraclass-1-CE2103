//
// Created by dani on 17/9/20.
//

#include <iostream>
#include "Node.h"

Node::Node(int new_data)
    : data(new_data), next(nullptr)
    {
        adjacencyList = new LinkedList();
}

Node::Node(int new_data, int weight)
    : data(new_data), weight(weight), next(nullptr), adjacencyList(nullptr){}

int Node::getData() {
    return data;
}

int Node::getWeight() {
    return weight;
}

Node* Node::getNext() {
    return next;
}

LinkedList *Node::getAdjacencyList() {
    return adjacencyList;
}

void Node::setNext(Node* new_next) {
    next = new_next;
}