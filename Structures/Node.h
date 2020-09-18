//
// Created by dani on 17/9/20.
//

#ifndef EXTRACLASS_1_CE2103_NODE_H
#define EXTRACLASS_1_CE2103_NODE_H

/**
 * @brief A class that represents a node used in linked lists.
 */
class Node {
    private:
        int* data;
        Node* next;

    public:
        /**
         * @brief Constructor for the Node class.
         * It sets "next" to nullptr and the value pointer by data "data" to the entered paremeter.
         * @param new_data The value that'll be assigned to the data pointer.
         */
        explicit Node(int new_data);

        /**
         * @brief Getter for the "data" attribute.
         * @return The value pointed by the "data" attribute.
         */
        int getDataValue();

        /**
         * @brief Getter for the "next" attribute.
         * @return The "next" pointer type attribute.
         */
        Node* getNext();

        /**
         * @brief Setter for the "next" pointer type attribute.
         * @param new_next The new value that'll be assigned to the "next" attribute.
         */
        void setNext(Node* new_next);
};


#endif //EXTRACLASS_1_CE2103_NODE_H
