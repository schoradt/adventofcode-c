#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day14.h"

TEST_CASE("Testing Day 14 process 1")
{
    Day14 day;

    vector<string> input = day.loadLinesString("");

    CHECK_MESSAGE(-1 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 14 process 2")
{
    Day14 day;

    vector<string> input;
    
    input = day.loadLinesString("");
    CHECK_MESSAGE(-1 == day.process2(input, 0), "test process 2");
}
