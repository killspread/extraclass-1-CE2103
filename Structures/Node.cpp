//
// Created by dani on 17/9/20.
//

#include <cstdlib>
#include "Node.h"

Node::Node(int new_data)
    : data((int*) std::malloc(sizeof(int))), next(nullptr)
    {
    *data = new_data;
}

int Node::getDataValue() {
    return *data;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node* new_next) {
    next = new_next;
}