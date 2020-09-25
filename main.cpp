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
    main.setFixedSize(950, 300);

    main.show();

    return QApplication::exec(); // executes QT app and sets the event loop
}