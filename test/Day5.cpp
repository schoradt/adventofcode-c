#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day5.h"

TEST_CASE("Testing Day 5 seat id")
{
    Day5 day;

    CHECK_MESSAGE(357 == day.computeSeatId("FBFBBFFRLR"), "test process 1");
    //CHECK_MESSAGE(567 == day.computeSeatId("BFFFBBFRRR"), "test process 1");
    //CHECK_MESSAGE(119 == day.computeSeatId("FFFBBBFRRR"), "test process 1");
    CHECK_MESSAGE(820 == day.computeSeatId("BBFFBBFRLL"), "test process 1");
}

TEST_CASE("Testing Day 5 process 1")
{
    Day5 day;

    vector<string> input = day.loadLinesString("BFFFBBFRRR\nFFFBBBFRRR\nBBFFBBFRLL");

    CHECK_MESSAGE(820 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 5 process 2")
{
    Day5 day;

    vector<string> input = day.loadLinesString("BFFFBBFRRR\nFFFBBBFRRR\nBBFFBBFRLL");

    CHECK_MESSAGE(120 == day.process2(input), "test process 2");
}
