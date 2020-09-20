//
// Created by dani on 17/9/20.
//

#include "Node.h"

Node::Node(int new_data)
    : data(new_data), next(nullptr), adjacent(nullptr) {}

int Node::getData() {
    return data;
}

int Node::getWeight() {
    return weight;
}

Node* Node::getNext() {
    return next;
}

LinkedList *Node::getAdjacent() {
    return adjacent;
}

void Node::setNext(Node* new_next) {
    next = new_next;
}


