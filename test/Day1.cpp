#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day1.h"

TEST_CASE("Testing Day 1")
{
    Day1 day1;

    CHECK_MESSAGE(42 == day1.test(), "test is 42");
}