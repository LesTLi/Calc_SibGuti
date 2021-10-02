#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <math.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
	void onResetButtonClick();
	void onCalcButtonClick();
	void onNumButtonClick();

private:
	Ui::MainWindow *ui;
    double left = 0;
    bool isCalced = false;
    bool isLeft = true;
    QString action;
};
#endif