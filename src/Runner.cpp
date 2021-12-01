
#include "Day1.h"

#include <iostream>

using namespace std;

void day1() {
    Day1 day1;

    vector<int> lines = day1.parseIntegerLines(day1.loadLines("../data/test1.txt"));

    cout << "Day 1 part 1 " << day1.process1(lines) << endl;
    cout << "Day 1 part 2 " << day1.process2(lines) << endl;
}

int main() {
    day1();

    return 0;
}