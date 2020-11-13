#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day1.h"

TEST_CASE("Testing Day 1 computeFuel")
{
    Day1 day1;

    CHECK_MESSAGE(2 == day1.computeFuel(12), "fuel test");
    CHECK_MESSAGE(2 == day1.computeFuel(14), "fuel test");
    CHECK_MESSAGE(654 == day1.computeFuel(1969), "fuel test");
    CHECK_MESSAGE(33583 == day1.computeFuel(100756), "fuel test");
}

TEST_CASE("Testing Day 1 computeFuelWithFuel")
{
    Day1 day1;

    CHECK_MESSAGE(2 == day1.computeFuelWithFuel(14), "fuel test");
    CHECK_MESSAGE(966 == day1.computeFuelWithFuel(1969), "fuel test");
    CHECK_MESSAGE(50346 == day1.computeFuelWithFuel(100756), "fuel test");
}
