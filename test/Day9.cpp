#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day9.h"

TEST_CASE("Testing Day 9 process 1")
{
    Day9 day;

    vector<long> input = day.parseLongLines(day.loadLinesString("35\n20\n15\n25\n47\n40\n62\n55\n65\n95\n102\n117\n150\n182\n127\n219\n299\n277\n309\n576"));

    CHECK_MESSAGE(127 == day.process1(input, 5), "test process 1");
}

TEST_CASE("Testing Day 9 process 2")
{
    Day9 day;

    vector<long> input = day.parseLongLines(day.loadLinesString("35\n20\n15\n25\n47\n40\n62\n55\n65\n95\n102\n117\n150\n182\n127\n219\n299\n277\n309\n576"));

    CHECK_MESSAGE(-1 == day.process2(input, 5), "test process 2");
}
