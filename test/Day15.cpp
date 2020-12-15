#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day15.h"

TEST_CASE("Testing Day 15 process 1")
{
    Day15 day;

    CHECK_MESSAGE(1 == day.process1(day.parseIntegerLines(day.splitLine("1,3,2"))), "test process 1");
    CHECK_MESSAGE(10 == day.process1(day.parseIntegerLines(day.splitLine("2,1,3"))), "test process 1");
    CHECK_MESSAGE(27 == day.process1(day.parseIntegerLines(day.splitLine("1,2,3"))), "test process 1");
    CHECK_MESSAGE(78 == day.process1(day.parseIntegerLines(day.splitLine("2,3,1"))), "test process 1");
    CHECK_MESSAGE(438 == day.process1(day.parseIntegerLines(day.splitLine("3,2,1"))), "test process 1");
    CHECK_MESSAGE(1836 == day.process1(day.parseIntegerLines(day.splitLine("3,1,2"))), "test process 1");
}

TEST_CASE("Testing Day 15 process 2")
{
    Day15 day;

    vector<int> input;

    //input = day.loadLinesString("");
    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
