#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day2.h"

TEST_CASE("Testing Day 2")
{
    Day2 day2;

    vector<string> input = day2.loadLinesString("forward 5\ndown 5\nforward 8\nup 3\ndown 8\nforward 2");

    CHECK_MESSAGE(150 == day2.process1(input), "test process 1");
    CHECK_MESSAGE(900 == day2.process2(input), "test process 2");
}