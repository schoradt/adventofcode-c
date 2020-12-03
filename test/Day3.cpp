#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day3.h"

TEST_CASE("Testing Day 2")
{
    Day3 day;

    vector<string> input = day.loadLinesString("..##.......\n#...#...#..\n.#....#..#.\n..#.#...#.#\n.#...##..#.\n..#.##.....\n.#.#.#....#\n.#........#\n#.##...#...\n#...##....#\n.#..#...#.#");

    CHECK_MESSAGE(7 == day.process1(input), "test process 1");
}

TEST_CASE("Testing Day 2 process 2")
{
    Day3 day;

    vector<string> input = day.loadLinesString("..##.......\n#...#...#..\n.#....#..#.\n..#.#...#.#\n.#...##..#.\n..#.##.....\n.#.#.#....#\n.#........#\n#.##...#...\n#...##....#\n.#..#...#.#");

    CHECK_MESSAGE(336 == day.process2(input), "test process 2");
}
