#include <QString>
#include <QtTest>
#include <QCoreApplication>

class CalcTest : public QObject
{
    Q_OBJECT

public:
    CalcTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();
};

CalcTest::CalcTest()
{
}

void CalcTest::initTestCase()
{
}

void CalcTest::cleanupTestCase()
{
}

void CalcTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(CalcTest)

#include "tst_calctest.moc"