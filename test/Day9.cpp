#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day9.h"

TEST_CASE("Testing Day 9 process 1")
{
    Day9 day;

    vector<string> input = day.loadLinesString("");

    CHECK_MESSAGE(-1 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 9 process 2")
{
    Day9 day;

    vector<string> input = day.loadLinesString("");

    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
