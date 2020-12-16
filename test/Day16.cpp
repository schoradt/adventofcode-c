#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day16.h"

TEST_CASE("Testing Day 16 process 1")
{
    Day16 day;

    CHECK_MESSAGE(-1 == day.process1(day.parseIntegerLines(day.splitLine("1"))), "test process 1");
}

TEST_CASE("Testing Day 16 process 2")
{
    Day16 day;

    CHECK_MESSAGE(-1 == day.process2(day.parseIntegerLines(day.splitLine("1"))), "test process 2");
}
