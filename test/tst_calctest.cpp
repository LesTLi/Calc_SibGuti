#include <QString>
#include <QtTest>
#include <QCoreApplication>

#include "../src/Calc.h"
#include "../src/ui_Calc.h"

class CalcTest : public QObject
{
    Q_OBJECT

public:
    CalcTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void shouldAdd();

private:
    MainWindow* window;
    Ui::MainWindow* ui;
};

CalcTest::CalcTest()
{
    window = new MainWindow();
    ui = window->ui;
}

void CalcTest::initTestCase()
{
}

void CalcTest::cleanupTestCase()
{
}

void CalcTest::shouldAdd()
{
    ui->numButton3->click();
    ui->actionButtonAdd->click();
    ui->numButton5->click();
    ui->calcButton->click();
    QVERIFY2(ui->output->text() == "8", "Failure");
}

QTEST_MAIN(CalcTest)

#include "tst_calctest.moc"