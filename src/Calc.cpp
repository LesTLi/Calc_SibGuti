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
        connect(button, SIGNAL(clicked()), this,SLOT(onNumButtonClick()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onResetButtonClick()
{
    ui->output->clear();
    left = 0;
    isLeft = true;
}


void MainWindow::onCalcButtonClick()
{
    QString currentValue = ui->output->text();
    double value = currentValue.toDouble();
    double result = 0;

    qDebug() << "value" << value;

    if (action == "+") {
        result = left + value;
    } else
    if (action == "-") {
        result = left - value;
    } else
    if (action == "x") {
        result = left * value;
    } else
    if (action == "/") {
        result = left / value;
    }

    qDebug() << "result" << result;

    ui->output->setText(QString::number(result));

    isCalced = true;
    isLeft = true;
    left = value;
}

void MainWindow::onNumButtonClick()
{
    QPushButton *button = (QPushButton *)sender();
    QString digit = button->text();
    QString currentValue = ui->output->text();

    qDebug() << "number clicked" << digit;

    if (!isLeft || isCalced) {
        qDebug() << "reset output";
        currentValue = "";
    }

    isLeft = true;

    if (isCalced) {
        qDebug() << "reset left";
        left = 0;
    }

    isCalced = false;

    ui->output->setText(currentValue + digit);
}