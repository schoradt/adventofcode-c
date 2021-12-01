#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day1.h"

TEST_CASE("Testing Day 1")
{
    Day1 day1;

    vector<int> input = day1.parseIntegerLines(day1.loadLinesString("199\n200\n208\n210\n200\n207\n240\n269\n260\n263"));

    CHECK_MESSAGE(7 == day1.process1(input), "test process 1");
    CHECK_MESSAGE(5 == day1.process2(input), "test process 2");
}