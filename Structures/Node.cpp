//
// Created by dani on 17/9/20.
//

#include "Node.h"

Node::Node(int new_data)
    : data(new_data), weight(0), next(nullptr), adjacent(nullptr) {}

int Node::getData() {
    return data;
}

int Node::getWeigth() {
    return weight;
}

Node* Node::getNext() {
    return next;
}

Node *Node::getAdjacent() {
    return adjacent;
}

void Node::setNext(Node* new_next) {
    next = new_next;
}

void Node::setAdjacent(Node *new_adjacent) {
    adjacent = new_adjacent;
}

