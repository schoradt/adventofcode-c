#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day10.h"

TEST_CASE("Testing Day 10 process 1")
{
    Day10 day;

    vector<long> input = day.parseLongLines(day.loadLinesString(""));

    CHECK_MESSAGE(-1 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 10 process 2")
{
    Day10 day;

    vector<long> input = day.parseLongLines(day.loadLinesString(""));

    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
