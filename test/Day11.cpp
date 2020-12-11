#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day11.h"

TEST_CASE("Testing Day 11 process 1")
{
    Day11 day;

    vector<int> input = day.parseIntegerLines(day.loadLinesString(""));

    CHECK_MESSAGE(-1 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 11 process 2")
{
    Day11 day;

    vector<int> input = day.parseIntegerLines(day.loadLinesString(""));

    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
