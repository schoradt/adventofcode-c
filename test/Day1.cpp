#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day1.h"

TEST_CASE("Testing Day 1")
{
    Day1 day1;

    vector<int> input = day1.parseIntergerLines(day1.loadLinesString("1721\n979\n366\n299\n675\n1456"));

    CHECK_MESSAGE(514579 == day1.process1(input), "test is 42");
}

TEST_CASE("Testing Day 1")
{
    Day1 day1;

    vector<int> input = day1.parseIntergerLines(day1.loadLinesString("1721\n979\n366\n299\n675\n1456"));

    CHECK_MESSAGE(241861950 == day1.process2(input), "test is 42");
}