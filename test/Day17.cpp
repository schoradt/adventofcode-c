#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day17.h"

TEST_CASE("Testing Day 17 process 1")
{
    Day17 day;

    CHECK_MESSAGE(-1 == day.process1(day.loadLinesString("")), "test process 1");
}

TEST_CASE("Testing Day 16 process 2")
{
    Day17 day;

    CHECK_MESSAGE(-1 == day.process2(day.loadLinesString("")), "test process 2");
}
