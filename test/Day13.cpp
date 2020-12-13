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

    vector<string> input;
    //vector<string> input = day.loadLinesString("939\n7,13,x,x,59,x,31,19");
    //CHECK_MESSAGE(1068781 == day.process2(input, 0), "test process 2");

    input = day.loadLinesString("939\n17,x,13,19");
    CHECK_MESSAGE(3417 == day.process2(input, 0), "test process 2");

    input = day.loadLinesString("939\n67,7,59,61");
    CHECK_MESSAGE(754018 == day.process2(input, 0), "test process 2");

    input = day.loadLinesString("939\n67,x,7,59,61");
    CHECK_MESSAGE(779210 == day.process2(input, 0), "test process 2");

    input = day.loadLinesString("939\n67,7,x,59,61");
    CHECK_MESSAGE(1261476 == day.process2(input, 0), "test process 2");

    input = day.loadLinesString("939\n1789,37,47,1889");
    //CHECK_MESSAGE(1202161486 == day.process2(input, 1202161486), "test process 2");
    CHECK_MESSAGE(1202161486 == day.process2(input, 1000000000), "test process 2");
}
