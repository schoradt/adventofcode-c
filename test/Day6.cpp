#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day6.h"

TEST_CASE("Testing Day 6 process 1")
{
    Day6 day;

    vector<string> input = day.loadLinesString("abc\n\na\nb\nc\n\n\nab\nac\n\na\na\na\na\n\nb");

    CHECK_MESSAGE(11 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 6 process 2")
{
    Day6 day;

    vector<string> input = day.loadLinesString("BFFFBBFRRR\nFFFBBBFRRR\nBBFFBBFRLL");

    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
