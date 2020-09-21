#include <iostream>
#include <Structures/Graph.h>

int main()
{
    Graph graph;
    graph.addVertex(0);
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);
    graph.addVertex(4);
    graph.addVertex(5);

    graph.addEdge(0, 1, 3);
    graph.addEdge(0, 2, 8);
    graph.addEdge(0, 4, 12);
    graph.addEdge(1, 3, 1);
    graph.addEdge(1, 4, 7);
    graph.addEdge(2, 1, 4);
    graph.addEdge(3, 2, 5);
    graph.addEdge(3, 0, 2);
    graph.addEdge(4, 3, 6);

    graph.floydWarshall(5, 4);

    return 0;
}