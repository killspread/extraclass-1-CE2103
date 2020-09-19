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
        int data;
        int weight = 0;
        Node* next;
        Node* adjacent;

    public:
        /**
         * @brief Constructor for the Node class.
         * It sets "next" to nullptr and the value of data "data" to the entered paremeter.
         * @param new_data The value that'll be assigned to the "data" attribute.
         */
        explicit Node(int new_data);

        /**
         * @brief Getter for the "data" attribute.
         * @return The value stored in the "data" attribute.
         */
        int getData();

        /**
         * @brief Getter for the "weight" attribute.
         * @return The value stored in the "weight" attribute.
         */
        int getWeigth();

        /**
         * @brief Getter for the "next" attribute.
         * @return The "next" pointer type attribute.
         */
        Node* getNext();

        /**
         * @brief Getter for the "adjacent" attribute.
         * @return The "adjacent" pointer type attribute.
         */
        Node* getAdjacent();

        /**
         * @brief Setter for the "next" pointer type attribute.
         * @param new_next The new value that'll be assigned to the "next" attribute.
         */
        void setNext(Node* new_next);

        /**
         * @brief Setter for the "adjacent" pointer type attribute.
         * @param new_adjacent The new value that'll be assigned to the "adjacent" attribute.
         */
        void setAdjacent(Node* new_adjacent);
};


#endif //EXTRACLASS_1_CE2103_NODE_H
