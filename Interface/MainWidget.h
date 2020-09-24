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


class MainWidget : public QWidget {
    Q_OBJECT

    public:
        explicit MainWidget(QWidget *parent = nullptr);
        ~MainWidget();

    private slots:
        void onButtonReleased(); // handler for button presses

    private:
        QLabel* label1;
        QLabel* label2;
        QPushButton* button;
        QLineEdit* input1;
        QLineEdit* input2;
        Graph* graph;
};


#endif //EXTRACLASS_1_CE2103_MAINWIDGET_H
