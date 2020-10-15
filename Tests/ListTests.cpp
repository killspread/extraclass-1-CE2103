//
// Created by dani on 10/10/20.
//

#include "gtest/gtest.h"

#include "../Structures/LinkedList.h"


class Pruebas{

public:
    int TestAddHead(int);
    bool TestExist(int);
    int TestLength();
    int TestGetIndex(int);
    void createList();
    int TestgetData(int);
    int TestNodeData(int);
    int TestNodeWeight(int, int);
    int TestSetNext(int, int);
    Pruebas();
    LinkedList* List;
};
void Pruebas::createList() {
    List = new LinkedList();
    List->append(1);
    List->append(2);
    List->append(3);
    List->append(4);
    List->append(5);
}
int Pruebas::TestAddHead(int num){
    createList();
    return List->getHead()->getData();
}
bool Pruebas::TestExist(int data) {
    createList();
    return List->exists(data);
}
int Pruebas::TestLength() {
    createList();
    return List->getLength();
}
int Pruebas::TestGetIndex(int index) {
    createList();
    return List->getByIndex(index)->getData();
}
int Pruebas::TestgetData(int data) {
    createList();
    return List->getByData(data)->getData();
}
int Pruebas::TestNodeData(int data) {
    Node* node = new Node(data);
    return node->getData();
}
int Pruebas::TestNodeWeight(int data, int weight) {
    Node* node = new Node(data,weight);
    return node->getWeight();
}
int Pruebas::TestSetNext(int previous, int next) {
    Node* NodePrev = new Node(previous);
    Node* NodeNext = new Node(next);
    NodePrev->setNext(NodeNext);
    return NodePrev->getNext()->getData();
}
Pruebas::Pruebas(){

}
Pruebas* pruebas = new Pruebas();


TEST(P1,Example){
    EXPECT_EQ(pruebas->TestAddHead(1),1);
}
TEST(P2,Example){
    EXPECT_TRUE(pruebas->TestExist(5));
}
TEST(P3,Example){
    EXPECT_EQ(pruebas->TestLength(),5);
}
TEST(P4,Example){
    EXPECT_EQ(pruebas->TestGetIndex(2),3);
}
TEST(P5,Example){
    EXPECT_EQ(pruebas->TestgetData(2),2);
}
TEST(P6,Example){
    EXPECT_EQ(pruebas->TestNodeData(12),12);
}
TEST(P7,Example){
    EXPECT_EQ(pruebas->TestNodeWeight(12,46),46);
}
TEST(P8,Example){
    EXPECT_EQ(pruebas->TestSetNext(1,2),2);
}