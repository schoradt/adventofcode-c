#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Day10.h"

TEST_CASE("Testing Day 10 process 1")
{
    Day10 day;

    vector<int> input = day.parseIntegerLines(day.loadLinesString("16\n10\n15\n5\n1\n11\n7\n19\n6\n12\n4"));

    CHECK_MESSAGE(35 == day.process1(input), "test process 1");

    vector<int> input2 = day.parseIntegerLines(day.loadLinesString("28\n33\n18\n42\n31\n14\n46\n20\n48\n47\n24\n23\n49\n45\n19\n38\n39\n11\n1\n32\n25\n35\n8\n17\n7\n9\n4\n2\n34\n10\n3"));

    CHECK_MESSAGE(220 == day.process1(input2), "test process 1");
}

TEST_CASE("Testing Day 10 process 2")
{
    Day10 day;

    vector<int> input = day.parseIntegerLines(day.loadLinesString("16\n10\n15\n5\n1\n11\n7\n19\n6\n12\n4"));

    CHECK_MESSAGE(8 == day.process2(input), "test process 2");

    vector<int> input2 = day.parseIntegerLines(day.loadLinesString("28\n33\n18\n42\n31\n14\n46\n20\n48\n47\n24\n23\n49\n45\n19\n38\n39\n11\n1\n32\n25\n35\n8\n17\n7\n9\n4\n2\n34\n10\n3"));

    CHECK_MESSAGE(19208 == day.process2(input2), "test process 2");
}
