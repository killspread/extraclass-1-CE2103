//
// Created by dani on 17/9/20.
//

#ifndef EXTRACLASS_1_CE2103_LINKEDLIST_H
#define EXTRACLASS_1_CE2103_LINKEDLIST_H

#include "Node.h"

class Node; // This forward declaration is used because without it, the program doesn't compile. This way, the
            // the compiler knows about the class Node before it's declaration as a pointer below.

/**
 * @brief A class that represents a singly linked list.
 */
class LinkedList {
    private:
        int length = 0;
        Node* head;
        Node* tail;

    public:
        /**
         * @brief Constructor for the LinkedList class.
         * It sets the value pointed by "length" to 0 and "head" to nullptr.
         */
        LinkedList();

        /**
         * @brief Getter for the "head" attribute.
         * @return The "head" pointer type attribute.
         */
        Node* getHead();

        /**
         * @brief Getter for the "length" attribute.
         * @return The value of the"length" attribute.
         */
        int getLength();

        /**
         * @brief Adds a new node at the back of the linked list with the value entered as a parameter.
         * @param data The value that the new node will contain.
         */
        void append(int data);

        /**
         * @brief Adds a new node at the back of the linked list with the value entered as a parameter.
         * It also adds a weight to the new node.
         * @param data The value that the new node will contain.
         * @param weight The weight assigned to the new node.
         */
        void append(int data, int weight);

        /**
         * @brief Checks if a node with the entered value exists inside the list.
         * @param data The value to be checked.
         * @return True if a node with data was found, false otherwise.
         */
        bool exists(int data);

        /**
         * @brief Checks if two nodes, each with one of the entered value exist inside the list.
         * @param first_data The first value to be checked.
         * @param second_value The second value to be checked.
         * @return True if both nodes exist, false otherwise.
         */
        bool exists(int first_data, int second_data);

        /**
         * @brief Searches for a node in the list with the specified data value.
         * @param data The value of the node to be searched for.
         * @return A pointer to the found node.
         */
        Node* getByData(int data);

        /**
         * @brief Iterates through the list and returns the node on the specified index.
         * @param i The index asked for
         * @return A pointer to the found node.
         */
        Node* getByIndex(int i);

        /**
         * @brief Creates list representation of the linked list.
         * @param isAdjacent Boolean that determines if the list is an adjaceny list or not.
         * @return The list representation.
        */
        std::string printList(bool isAdjacent);
};

#endif //EXTRACLASS_1_CE2103_LINKEDLIST_H
