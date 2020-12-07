#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day7.h"

TEST_CASE("Testing Day 7 process 1")
{
    Day7 day;

    vector<string> input = day.loadLinesString("light red bags contain 1 bright white bag, 2 muted yellow bags.\ndark orange bags contain 3 bright white bags, 4 muted yellow bags.\nbright white bags contain 1 shiny gold bag.\nmuted yellow bags contain 2 shiny gold bags, 9 faded blue bags.\nshiny gold bags contain 1 dark olive bag, 2 vibrant plum bags.\ndark olive bags contain 3 faded blue bags, 4 dotted black bags.\nvibrant plum bags contain 5 faded blue bags, 6 dotted black bags.\nfaded blue bags contain no other bags.\ndotted black bags contain no other bags.");

    CHECK_MESSAGE(4 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 7 process 2")
{
    Day7 day;

    vector<string> input = day.loadLinesString("");

    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
