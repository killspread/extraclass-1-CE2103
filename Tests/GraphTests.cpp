//
// Created by dani on 10/10/20.
//

#include "gtest/gtest.h"
#include "../Structures/Graph.h"

class GraphTests{

public:
    Graph* graph;
    GraphTests();
};

GraphTests::GraphTests() {
    graph = new Graph();

    graph->addVertex(0);
    graph->addVertex(1);
    graph->addVertex(2);
    graph->addVertex(3);
    graph->addVertex(4);
    graph->addVertex(5);
    graph->addVertex(6);
    graph->addVertex(7);
    graph->addVertex(8);

    graph->addEdge(0, 1, 3);
    graph->addEdge(0, 3, 2);
    graph->addEdge(0, 8, 4);
    graph->addEdge(1, 7, 4);
    graph->addEdge(2, 3, 6);
    graph->addEdge(2, 5, 1);
    graph->addEdge(2, 7, 2);
    graph->addEdge(3, 4, 1);
    graph->addEdge(4, 8, 8);
    graph->addEdge(5, 6, 8);

    graph->floydWarshall();
    graph->shortestRoute(0, 3);
}

GraphTests* graphTests = new GraphTests();

TEST(GraphTesting, AddsNewVertex) {
    EXPECT_EQ(0, graphTests->graph->addVertex(9));
}
TEST(GraphTesting, ManagesAddindRepeatedVertex) {
    EXPECT_EQ(1, graphTests->graph->addVertex(5));
}

TEST(GraphTesting, EnteringSameVerticesInEdgeAdding) {
    EXPECT_EQ(1, graphTests->graph->addEdge(3, 3, 6));
}

TEST(GraphTesting, EnteringNegativeWeightInEdgeAdding) {
    EXPECT_EQ(1, graphTests->graph->addEdge(3, 8, -5));
}

TEST(GraphTesting, EnteringNegativeWeightAndSameVerticesInEdgeAdding) {
    EXPECT_EQ(1, graphTests->graph->addEdge(8, 8, -4));
}

TEST(GraphTesting, EnteringNonExistentVertexInEdgeAdding) {
    EXPECT_EQ(1, graphTests->graph->addEdge(12, 2, 10));
}

TEST(GraphTesting, EnteringNonExistentVerticesInEdgeAdding) {
    EXPECT_EQ(1, graphTests->graph->addEdge(15, 17, 10));
}

TEST(GraphTesting, EnteringAlreadyConnectedVertices) {
    EXPECT_EQ(1, graphTests->graph->addEdge(0, 3, 5));
}

TEST(GraphTesting, GettingShortestRoute) {
    EXPECT_TRUE("Route weight = 2$0 -> 3" == graphTests->graph->shortestRoute(0, 3));
    EXPECT_TRUE("Route weight = 3$0 -> 3 -> 4" == graphTests->graph->shortestRoute(0, 4));
    EXPECT_TRUE("Route weight = 11$7 -> 1 -> 0 -> 8" == graphTests->graph->shortestRoute(7, 8));
}

TEST(GraphTesting, EnteringValidVerticesInEdgeAdding) {
    EXPECT_EQ(0, graphTests->graph->addEdge(2, 0, 3));
}


