#include <CppUTest/TestHarness.h>
#include <CppUTestExt/MockSupport.h>

extern "C"
{
#include "drivers/lib.h"
#include "stdlib.h"
}

TEST_GROUP(FirstTestGroup)
{
    void setup ()
    {
    }

    void teardown ()
    {
    }
};

TEST(FirstTestGroup, FirstTest)
{
    CHECK_EQUAL(4, add(1, 2));
};
