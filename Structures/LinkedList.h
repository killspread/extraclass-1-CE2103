//
// Created by dani on 17/9/20.
//

#ifndef EXTRACLASS_1_CE2103_LINKEDLIST_H
#define EXTRACLASS_1_CE2103_LINKEDLIST_H

#include "Node.h"

/**
 * @brief A class that represents a singly linked list.
 */
class LinkedList {
    private:
        int* length;
        Node* head;
        Node* tail;

    public:
        /**
         * @brief Constructor for the LinkedList class.
         * It sets the value pointed by "length" to 0 and "head" to nullptr.
         */
        LinkedList();

        /**
         * @brief Adds a new node at the back of the linked list with the value entered as a parameter.
         * @param data The value that the new node will contain.
         */
        void append(int data);

        /**
         * @brief Prints the list to the console.
         */
        void printList();
};

#endif //EXTRACLASS_1_CE2103_LINKEDLIST_H
