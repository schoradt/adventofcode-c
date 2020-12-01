
#include "Day1.h"

#include <iostream>

using namespace std;

void day1() {
    Day1 day1;

    vector<int> input = day1.parseIntergerLines(day1.loadLines("../data/day1.txt"));

    cout << "Day 1 part 1 " << day1.process1(input) << endl;
    cout << "Day 1 part 2 " << day1.process2(input) << endl;
}

int main() {
    day1();

    return 0;
}