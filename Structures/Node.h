//
// Created by dani on 17/9/20.
//

#ifndef EXTRACLASS_1_CE2103_NODE_H
#define EXTRACLASS_1_CE2103_NODE_H

#include "LinkedList.h"

class LinkedList; // This forward declaration is used because without it, the program doesn't compile. This way, the
                  // the compiler knows about the class LinkedList before it's declaration as a pointer below.

/**
* @brief A class that represents a node used in linked lists.
*/
class Node {
    private:
        int data;
        int weight = 0;
        Node* next;
        LinkedList* adjacencyList;

    public:
        /**
         * @brief Constructor for the Node class.
         * It sets "next" to nullptr and the value of data "data" to the entered paremeter.
         * @param new_data The value that'll be assigned to the "data" attribute.
         */
        Node(int new_data);

        /**
         * @brief Constructor for the Node class.
         * It sets "next" to nullptr and the value of data "data" to the entered paremeter.
         * @param new_data The value that'll be assigned to the "data" attribute.
         * @param weight The value that'll be assigned to the "weight" attribute.
         */
        Node(int new_data, int weight);

        /**
         * @brief Getter for the "data" attribute.
         * @return The value stored in the "data" attribute.
         */
        int getData();

        /**
         * @brief Getter for the "weight" attribute.
         * @return The value stored in the "weight" attribute.
         */
        int getWeight();

        /**
         * @brief Getter for the "next" attribute.
         * @return The "next" pointer type attribute.
         */
        Node* getNext();

        /**
         * @brief Getter for the "adjacencyList" attribute.
         * @return The "adjacencyList" pointer type attribute.
         */
        LinkedList* getAdjacencyList();

        /**
         * @brief Setter for the "next" pointer type attribute.
         * @param new_next The new value that'll be assigned to the "next" attribute.
         */
        void setNext(Node* new_next);
};


#endif //EXTRACLASS_1_CE2103_NODE_H
