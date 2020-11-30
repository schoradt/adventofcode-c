#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

#include "Base.h"


TEST_CASE("Testing Base splitLine")
{
    Base base;

    vector<string> res = base.splitLine("1,2,3,4,5");

    CHECK_MESSAGE(5 == res.size(), "res size is 5");

    CHECK_MESSAGE("1" == res[0], "res pos 0");
    CHECK_MESSAGE("2" == res[1], "res pos 1");
    CHECK_MESSAGE("3" == res[2], "res pos 2");
    CHECK_MESSAGE("4" == res[3], "res pos 3");
    CHECK_MESSAGE("5" == res[4], "res pos 4");
}

TEST_CASE("Testing Base loadLines")
{
    Base base;

    vector<string> res = base.loadLines("../data/test1.txt");

    CHECK_MESSAGE(5 == res.size(), "res size is 5");

    CHECK_MESSAGE("1" == res[0], "res pos 0");
    CHECK_MESSAGE("2" == res[1], "res pos 1");
    CHECK_MESSAGE("3" == res[2], "res pos 2");
    CHECK_MESSAGE("4" == res[3], "res pos 3");
    CHECK_MESSAGE("5" == res[4], "res pos 4");
}

TEST_CASE("Testing Base loadLine")
{
    Base base;

    string res = base.loadLine("../data/test2.txt");

    CHECK_MESSAGE(res.compare("1,2,3,4,5") == 0, "line loaded");
}

TEST_CASE("Testing Base loadLinesString")
{
    Base base;

    string lines = "1\n2\n3\n4\n5";

    vector<string> res = base.loadLinesString(lines);

    CHECK_MESSAGE(5 == res.size(), "res size is 5");

    CHECK_MESSAGE("1" == res[0], "res pos 0");
    CHECK_MESSAGE("2" == res[1], "res pos 1");
    CHECK_MESSAGE("3" == res[2], "res pos 2");
    CHECK_MESSAGE("4" == res[3], "res pos 3");
    CHECK_MESSAGE("5" == res[4], "res pos 4");
}

TEST_CASE("Testing Base parseIntegerLines")
{
    Base base;

    string lines = "1\n2\n3\n4\n5";

    vector<string> stringLines = base.loadLinesString(lines);

    CHECK_MESSAGE(5 == stringLines.size(), "res size is 5");

    vector<int> res = base.parseIntergerLines(stringLines);

    CHECK_MESSAGE(5 == res.size(), "res size is 5");

    CHECK_MESSAGE(1 == res[0], "res pos 0");
    CHECK_MESSAGE(2 == res[1], "res pos 1");
    CHECK_MESSAGE(3 == res[2], "res pos 2");
    CHECK_MESSAGE(4 == res[3], "res pos 3");
    CHECK_MESSAGE(5 == res[4], "res pos 4");
}

TEST_CASE("Testing Base joinLine strings")
{
    Base base;

    vector<string> res = base.splitLine("1,2,3,4,5");

    CHECK_MESSAGE(5 == res.size(), "res size is 5");

    CHECK_MESSAGE("1" == res[0], "res pos 0");
    CHECK_MESSAGE("2" == res[1], "res pos 1");
    CHECK_MESSAGE("3" == res[2], "res pos 2");
    CHECK_MESSAGE("4" == res[3], "res pos 3");
    CHECK_MESSAGE("5" == res[4], "res pos 4");

    CHECK_MESSAGE(base.joinLine(res).compare("1,2,3,4,5") == 0, "join matches");
}

TEST_CASE("Testing Base joinLine integer")
{
    Base base;

    vector<string> strings = base.splitLine("1,2,3,4,5");

    vector<int> res = base.parseIntergerLines(strings);

    CHECK_MESSAGE(5 == res.size(), "res size is 5");

    CHECK_MESSAGE(1 == res[0], "res pos 0");
    CHECK_MESSAGE(2 == res[1], "res pos 1");
    CHECK_MESSAGE(3 == res[2], "res pos 2");
    CHECK_MESSAGE(4 == res[3], "res pos 3");
    CHECK_MESSAGE(5 == res[4], "res pos 4");

    CHECK_MESSAGE(base.joinLine(res).compare("1,2,3,4,5") == 0, "join matches");
}