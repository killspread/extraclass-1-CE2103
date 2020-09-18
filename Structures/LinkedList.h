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
        int length;
        Node* head;

    public:
        /**
         * @brief Constructor for the LinkedList class.
         * It sets "length" to 0 and "head" to nullptr.
         */
        LinkedList();
};

#endif //EXTRACLASS_1_CE2103_LINKEDLIST_H
