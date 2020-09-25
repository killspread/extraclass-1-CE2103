//
// Created by dani on 22/9/20.
//

#ifndef EXTRACLASS_1_CE2103_MAINWIDGET_H
#define EXTRACLASS_1_CE2103_MAINWIDGET_H

#include <QtWidgets/QWidget>
#include <QtCore/QProcess>
#include <QtWidgets/QLabel>
#include <QLineEdit>
#include <QtWidgets/QHBoxLayout>
#include <Structures/Graph.h>
#include <QtWidgets/QPushButton>

/**
 * @brief This class is the main window of the graphic interface.
 */
class MainWidget : public QWidget {
    Q_OBJECT

    public:
        /**
         * @brief Constructor for the main windows. Draws all of the GUI components and instantiates the graph.
         * @param parent The parent of the widget. In this case, the widget is its own parent.
         */
        explicit MainWidget(QWidget *parent = nullptr);
        ~MainWidget();

    private slots:
        /**
         * @brief Method that manages a press of the button.
         */
        void onButtonReleased(); // handler for button presses

        /**
         * @brief Everytime the input text is edited, checks if all the required information is filled in order to
         * enable a button.
         */
        void onTextChange();

    private:
        QLabel* label1;
        QLabel* label2;
        QLabel* image;
        QPushButton* button;
        QLineEdit* input1;
        QLineEdit* input2;
        Graph* graph;

        /**
         * @brief Initializes the graph with all of its vertices and edges. Also performs the Floyd-Warshall algorithm.
         */
        void initGraph();
};


#endif //EXTRACLASS_1_CE2103_MAINWIDGET_H
