//
// Created by dani on 22/9/20.
//

#include <Interface/MainWidget.h>
#include "QApplication"

/**
 * @brief Main function that runs the program.
 * @return The running instance of a Qt widget.
 */
int main (int argc, char* argv[]) {
    QApplication app(argc, argv);

    MainWidget main;
    main.setFixedSize(950, 300);

    main.show();

    return QApplication::exec(); // executes QT app and sets the event loop
}