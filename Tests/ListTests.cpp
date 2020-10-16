//
// Created by dani on 10/10/20.
//

#include "gtest/gtest.h"

#include "../Structures/LinkedList.h"


class ListTests{

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
    ListTests();
    LinkedList* List;
};
void ListTests::createList() {
    List = new LinkedList();
    List->append(1);
    List->append(2);
    List->append(3);
    List->append(4);
    List->append(5);
}
int ListTests::TestAddHead(int num){
    createList();
    return List->getHead()->getData();
}
bool ListTests::TestExist(int data) {
    createList();
    return List->exists(data);
}
int ListTests::TestLength() {
    createList();
    return List->getLength();
}
int ListTests::TestGetIndex(int index) {
    createList();
    return List->getByIndex(index)->getData();
}
int ListTests::TestgetData(int data) {
    createList();
    return List->getByData(data)->getData();
}
int ListTests::TestNodeData(int data) {
    Node* node = new Node(data);
    return node->getData();
}
int ListTests::TestNodeWeight(int data, int weight) {
    Node* node = new Node(data,weight);
    return node->getWeight();
}
int ListTests::TestSetNext(int previous, int next) {
    Node* NodePrev = new Node(previous);
    Node* NodeNext = new Node(next);
    NodePrev->setNext(NodeNext);
    return NodePrev->getNext()->getData();
}
ListTests::ListTests(){

}
ListTests* tests = new ListTests();


TEST(TestList,AddAndGet){
    EXPECT_EQ(tests->TestAddHead(1),1);
}
TEST(TestList,Exists){
    EXPECT_TRUE(tests->TestExist(5));
}
TEST(TestList,GetLength){
    EXPECT_EQ(tests->TestLength(),5);
}
TEST(TestList,GetByIndex){
    EXPECT_EQ(tests->TestGetIndex(2),3);
}
TEST(TestList,GetByData){
    EXPECT_EQ(tests->TestgetData(2),2);
}
TEST(TestList,CreateGetNode){
    EXPECT_EQ(tests->TestNodeData(12),12);
}
TEST(TestList,CreateGetWeightNode){
    EXPECT_EQ(tests->TestNodeWeight(12,46),46);
}
TEST(TestList,SetNodeNext){
    EXPECT_EQ(tests->TestSetNext(1,2),2);
}
