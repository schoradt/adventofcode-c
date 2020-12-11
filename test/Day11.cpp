#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day11.h"

TEST_CASE("Testing Day 11 process 1")
{
    Day11 day;

    vector<string> input = day.loadLinesString("L.LL.LL.LL\nLLLLLLL.LL\nL.L.L..L..\nLLLL.LL.LL\nL.LL.LL.LL\nL.LLLLL.LL\n..L.L.....\nLLLLLLLLLL\nL.LLLLLL.L\nL.LLLLL.LL");

    CHECK_MESSAGE(37 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 11 process 2")
{
    Day11 day;

    vector<string> input = day.loadLinesString("L.LL.LL.LL\nLLLLLLL.LL\nL.L.L..L..\nLLLL.LL.LL\nL.LL.LL.LL\nL.LLLLL.LL\n..L.L.....\nLLLLLLLLLL\nL.LLLLLL.L\nL.LLLLL.LL");

    CHECK_MESSAGE(26 == day.process2(input), "test process 2");
}
