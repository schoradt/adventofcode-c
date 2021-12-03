#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day3.h"

TEST_CASE("Testing Day 3")
{
    Day3 day3;

    vector<string> input = day3.loadLinesString("00100\n11110\n10110\n10111\n10101\n01111\n00111\n11100\n10000\n11001\n00010\n01010");

    CHECK_MESSAGE(198 == day3.process1(input), "test process 1");
    CHECK_MESSAGE(230 == day3.process2(input), "test process 2");
}