//
// Created by dani on 17/9/20.
//

#include <cstdlib>
#include <string>
#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
    : length((int*) std::malloc(sizeof(int))), head(nullptr), tail(nullptr) {
    *length = 0;
}

void LinkedList::append(int data) {
    Node* node = new Node(data);

    if (*length == 0) {
        head = node;
        tail = node;
    }
    else {
        tail->setNext(node);
        tail = node;
    }
    *length += 1;
}

void LinkedList::printList() {
    Node* tmp = head;
    std::string output = "[";
    for (int i = 0; i < *length; ++i) {
        output += std::to_string(tmp->getDataValue());
        tmp = tmp->getNext();

        if (i == *length - 1) {
            output += "]";
        }
        else {
            output += ", ";
        }
    }

    std::cout << output;
}
