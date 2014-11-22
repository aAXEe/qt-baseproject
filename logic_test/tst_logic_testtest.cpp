#include <QString>
#include <QtTest>

#include "logic.h"

class Logic_testTest : public QObject
{
    Q_OBJECT

public:
    Logic_testTest();

private Q_SLOTS:
    void testCase1();
};

Logic_testTest::Logic_testTest()
{
}

void Logic_testTest::testCase1()
{
    Logic l;
    QCOMPARE(l.add(1,1), 2);
    QCOMPARE(l.add(1,1), 3);

}

QTEST_APPLESS_MAIN(Logic_testTest)

#include "tst_logic_testtest.moc"
