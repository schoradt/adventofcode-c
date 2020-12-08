#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day8.h"

TEST_CASE("Testing Day 8 process 1")
{
    Day8 day;

    vector<string> input = day.loadLinesString("nop +0\nacc +1\njmp +4\nacc +3\njmp -3\nacc -99\nacc +1\njmp -4\nacc +6");

    CHECK_MESSAGE(5 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 8 process 2")
{
    Day8 day;

    vector<string> input = day.loadLinesString("");

    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
