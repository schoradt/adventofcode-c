#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day2.h"

TEST_CASE("Testing Day 2")
{
    Day2 day;

    vector<string> input = day.loadLinesString("1-3 a: abcde\n1-3 b: cdefg\n2-9 c: ccccccccc");

    CHECK_MESSAGE(2 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 2 process 2")
{
    Day2 day;

    vector<string> input = day.loadLinesString("1-3 a: abcde\n1-3 b: cdefg\n2-9 c: ccccccccc");

    CHECK_MESSAGE(1 == day.process2(input), "test process 2");
}