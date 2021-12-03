
#include "Day1.h"
#include "Day2.h"
#include "Day3.h"

#include <iostream>

using namespace std;

void day1() {
    Day1 day1;

    vector<int> lines = day1.parseIntegerLines(day1.loadLines("../data/test1.txt"));

    cout << "Day 1 part 1 " << day1.process1(lines) << endl;
    cout << "Day 1 part 2 " << day1.process2(lines) << endl;
}

void day2() {
    Day2 day2;

    vector<string> lines = day2.loadLines("../data/test2.txt");

    cout << "Day 2 part 1 " << day2.process1(lines) << endl;
    cout << "Day 2 part 2 " << day2.process2(lines) << endl;
}

void day3() {
    Day3 day3;

    vector<int> lines = day3.parseIntegerLines(day3.loadLines("../data/test1.txt"));

    cout << "Day 3 part 1 " << day3.process1(lines) << endl;
    cout << "Day 3 part 2 " << day3.process2(lines) << endl;
}


int main() {
    day1();
    day2();
    day3();

    return 0;
}