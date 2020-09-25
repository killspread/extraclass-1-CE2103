//
// Created by dani on 22/9/20.
//

#include "MainWidget.h"
#include <QtWidgets>
#include <iostream>
#include <sstream>

//TODO add graph representation
MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    initGraph();

    input1 = new QLineEdit();
    input1->setFixedSize(150, 25);
    input1->setPlaceholderText("Starting vertex");
    input1->setValidator(new QIntValidator(0, 8, this));

    input2 = new QLineEdit();
    input2->setFixedSize(150, 25);
    input2->setPlaceholderText("Ending vertex");
    input2->setValidator(new QIntValidator(0, 8, this));

    button = new QPushButton(tr("Get shortest path"));
    button->setDisabled(true);
    button->setFixedSize(130, 30);

    label1 = new QLabel("");
    label1->setFixedSize(150, 25);

    label2 = new QLabel("");
    label2->setFixedSize(150, 25);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(input1, 0, 0);
    mainLayout->addWidget(input2, 0, 2);
    mainLayout->addWidget(button,1,1);
    mainLayout->addWidget(label1, 2, 1);
    mainLayout->addWidget(label2, 3, 1);
    setLayout(mainLayout);
    setWindowTitle(tr("Shortest route between two vetices"));

    connect(input1, SIGNAL(textChanged(QString)), this, SLOT(onTextChange()));
    connect(input2, SIGNAL(textChanged(QString)), this, SLOT(onTextChange()));
    connect(button, SIGNAL(released()), this, SLOT(onButtonReleased()));
}

void MainWidget::initGraph() {
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
}

void MainWidget::onTextChange() {
    if (!input1->text().isEmpty() && !input2->text().isEmpty() && input1->text() != input2->text() && input1->text().toInt() <= 8 && input2->text().toInt() <= 8) {
        button->setEnabled(true);
    }
}

void MainWidget::onButtonReleased() {
    QString in1 = input1->text();
    QString in2 = input2->text();

    if (in1.isEmpty() || in2.isEmpty()) {
        QMessageBox* box = new QMessageBox("", "Please fill in the required information.",
                                           QMessageBox::Warning, 0, 0, 0);
        box->show();
    }
    else {
        input1->clear();
        input2->clear();

        int first = in1.toInt();
        int second = in2.toInt();

        std::string result = graph->shortestRoute(first, second);
        char* result_char = &result[0];

        char* split = strtok(result_char, "$");

        char* weight;
        char* route;

        int counter = 0;
        while (split != nullptr) {
            if (counter == 0) {
                weight = split;
            }
            else if (counter == 1) {
                route = split;
            }
            split = strtok(nullptr, "&");
            counter++;
        }
        label1->setText(route);
        label2->setText(weight);
    }
    button->setDisabled(true);
}

MainWidget::~MainWidget()
{
    delete button;
    delete input1;
    delete input2;
    delete label1;
    delete label2;
    delete graph;
}
