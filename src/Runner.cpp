
#include "Day1.h"

#include <iostream>

using namespace std;

void day1() {
    Day1 day1;

    vector<string> stringLines = day1.loadLines("../data/day1.txt");
    vector<int> data = day1.parseIntergerLines(stringLines);

    cout << "Day 1 part 1 " << day1.part1(data) << endl;
    cout << "Day 1 part 2 " << day1.part2(data) << endl;
}

int main() {
    day1();

    return 0;
}