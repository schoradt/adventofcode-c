#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day13.h"

TEST_CASE("Testing Day 13 process 1")
{
    Day13 day;

    vector<string> input = day.loadLinesString("939\n7,13,x,x,59,x,31,19");

    CHECK_MESSAGE(295 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 13 process 2")
{
    Day13 day;

    vector<string> input = day.loadLinesString("");

    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
