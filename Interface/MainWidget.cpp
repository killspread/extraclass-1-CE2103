//
// Created by dani on 22/9/20.
//

#include "MainWidget.h"
#include <QtWidgets>
#include <iostream>

//TODO add graph representation
MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    input1 = new QLineEdit();
    input1->setFixedSize(150, 25);
    input1->setPlaceholderText("Starting vertex");

    input2 = new QLineEdit();
    input2->setFixedSize(150, 25);
    input2->setPlaceholderText("Ending vertex");

    button = new QPushButton(tr("Start algorithm"));
    button->setFixedSize(120, 30);

    label1 = new QLabel("1 -> 2 -> 3");
    label1->setFixedSize(150, 25);

    label2 = new QLabel("Route weight: 3");
    label2->setFixedSize(150, 25);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(input1, 0, 0);
    mainLayout->addWidget(input2, 0, 2);
    mainLayout->addWidget(button,1,1);
    mainLayout->addWidget(label1, 2, 1);
    mainLayout->addWidget(label2, 3, 1);
    setLayout(mainLayout);
    setWindowTitle(tr("Shortest route between two vetices"));

    connect(button, SIGNAL(released()), this, SLOT(onButtonReleased()));
}

MainWidget::~MainWidget()
{
    delete button;
    delete input1;
    delete input2;
    delete label1;
}

void MainWidget::onButtonReleased() {

}
