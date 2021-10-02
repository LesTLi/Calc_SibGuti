#include "Calculater.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->resetButton, SIGNAL(clicked()), this,SLOT(onResetButtonClick()));
    connect(ui->calcButton, SIGNAL(clicked()), this,SLOT(onCalcButtonClick()));
    connect(ui->actionButtonAdd, SIGNAL(clicked()), this,SLOT(onActionButtonClick()));
    connect(ui->actionButtonDiv, SIGNAL(clicked()), this,SLOT(onActionButtonClick()));
    connect(ui->actionButtonSub, SIGNAL(clicked()), this,SLOT(onActionButtonClick()));
    connect(ui->actionButtonMult, SIGNAL(clicked()), this,SLOT(onActionButtonClick()));

    for(int i = 0; i < 11; ++i){
        QString buttonName = "numButton" + QString::number(i);
        QPushButton *button = findChild<QPushButton *>(buttonName);
        // When the button is released call num_pressed()
        connect(button, SIGNAL(clicked()), this,SLOT(onNumButtonClick()));
    }
}