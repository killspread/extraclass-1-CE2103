//
// Created by dani on 17/9/20.
//

#include <string>
#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
    : head(nullptr), tail(nullptr) {}

Node *LinkedList::getHead() {
    return head;
}

int LinkedList::getLength() {
    return length;
}

void LinkedList::append(int data) {
    Node* node = new Node(data);

    if (length == 0) {
        head = node;
        tail = node;
    }
    else {
        tail->setNext(node);
        tail = node;
    }
    length++;
}

void LinkedList::append(int data, int weight) {
    Node* node = new Node(data, weight);

    if (length == 0) {
        head = node;
        tail = node;
    }
    else {
        tail->setNext(node);
        tail = node;
    }
    length++;
}

bool LinkedList::exists(int data) {
    Node* tmp = head;

    for (int i = 0; i < length; i++) {
        if (tmp->getData() == data) {
            return true;
        }
        else {
            tmp = tmp->getNext();
        }
    }

    return false;
}

bool LinkedList::exists(int first_data, int second_data) {
    Node* tmp = head;
    bool first_found = false;
    bool second_found = false;
    bool result = false;

    for (int i = 0; i < length; i++) {
        if (first_found || second_found) {
            if (tmp->getData() == first_data || tmp->getData() == second_data) {
                result = true;
                break;
            }
            else {
                tmp = tmp->getNext();
            }
        }
        else {
            if (tmp->getData() == first_data) {
                first_found = true;
            } else if (tmp->getData() == second_data) {
                second_found = true;
            }
            tmp = tmp->getNext();
        }
    }
    return result;
}

Node* LinkedList::getByData(int data) {
    Node* tmp = head;
    while (tmp->getData() != data) {
        tmp = tmp->getNext();
    }
    return tmp;
}

Node* LinkedList::getByIndex(int i) {
    Node* tmp = head;
    for (int j = 0; j < i; j++) {
        tmp = tmp->getNext();
    }
    return tmp;
}


std::string LinkedList::printList(bool isAdjacent) {
    Node* tmp = head;
    std::string output;
    for (int i = 0; i < length; i++) {
        output += std::to_string(tmp->getData());
        if (isAdjacent) {
            output += ":" + std::to_string(tmp->getWeight());
        }
        tmp = tmp->getNext();

        if (i != length - 1) {
            output += " -> ";
        }

    }

    return output;
}
