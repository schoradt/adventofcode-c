#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day18.h"

TEST_CASE("Testing Day 18 process 1")
{
    Day18 day;

    CHECK_MESSAGE(-1 == day.process1(day.loadLinesString("")), "test process 1");
}

TEST_CASE("Testing Day 18 process 2")
{
    Day18 day;

    CHECK_MESSAGE(-1 == day.process2(day.loadLinesString("")), "test process 2");
}
