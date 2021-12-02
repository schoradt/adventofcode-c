
#include "Day1.h"
#include "Day2.h"

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

int main() {
    day1();
    day2();

    return 0;
}