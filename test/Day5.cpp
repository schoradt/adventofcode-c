#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day5.h"

TEST_CASE("Testing Day 5 seat id")
{
    Day5 day;

    CHECK_MESSAGE(357 == day.computeSeatId("FBFBBFFRLR"), "test process 1");
    CHECK_MESSAGE(567 == day.computeSeatId("BFFFBBFRRR"), "test process 1");
    CHECK_MESSAGE(119 == day.computeSeatId("FFFBBBFRRR"), "test process 1");
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

    vector<string> input = day.loadLinesString("ecl:gry pid:860033327 eyr:2020 hcl:#fffffd\nbyr:1937 iyr:2017 cid:147 hgt:183cm\n\niyr:2013 ecl:amb cid:350 eyr:2023 pid:028048884\nhcl:#cfa07d byr:1929\n\nhcl:#ae17e1 iyr:2013\neyr:2024\necl:brn pid:760753108 byr:1931\nhgt:179cm\n\nhcl:#cfa07d eyr:2025 pid:166559648\niyr:2011 ecl:brn hgt:59in");

    CHECK_MESSAGE(-1 == day.process2(input), "test process 2");
}
