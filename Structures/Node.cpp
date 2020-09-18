//
// Created by dani on 17/9/20.
//

#include "Node.h"

Node::Node(int new_data) : data(new_data), next(nullptr) {}

int Node::getData() {
    return data;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node* new_next) {
    next = new_next;
}