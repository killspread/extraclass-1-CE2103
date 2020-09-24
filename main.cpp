//
// Created by dani on 22/9/20.
//

#include <Interface/MainWidget.h>
#include <Structures/Graph.h>
#include <iostream>
#include "QApplication"

int main (int argc, char* argv[]) {
    QApplication app(argc, argv);

    MainWidget main;
    main.setFixedSize(650, 400);
    main.show();

//    Graph* graph = new Graph();
//
//    graph->addVertex(0);
//    graph->addVertex(1);
//    graph->addVertex(2);
//    graph->addVertex(3);
//    graph->addVertex(4);
//    graph->addVertex(5);
//    graph->addVertex(6);
//    graph->addVertex(7);
//    graph->addVertex(8);
//
//    graph->addEdge(0, 1, 3);
//    graph->addEdge(0, 3, 2);
//    graph->addEdge(0, 8, 4);
//    graph->addEdge(1, 7, 4);
//    graph->addEdge(2, 3, 6);
//    graph->addEdge(2, 5, 1);
//    graph->addEdge(2, 7, 2);
//    graph->addEdge(3, 4, 1);
//    graph->addEdge(4, 8, 8);
//    graph->addEdge(5, 6, 8);
//
//    graph->floydWarshall();
//
//    std::cout << graph->shortestRoute(0, 6);

    return QApplication::exec(); // executes QT app and sets the event loop
}