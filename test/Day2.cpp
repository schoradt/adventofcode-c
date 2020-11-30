#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day2.h"

string testIntcode(Day2 day, string program) {
    vector<int> p = day.parseIntergerLines(day.splitLine(program));

    day.intcodeCompute(&p);

    return day.joinLine(p);
}

TEST_CASE("Testing Day 2 ")
{
    Day2 day;

    CHECK_MESSAGE(0 == day.part1("1"), "part1 test");
}

