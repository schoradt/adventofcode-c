
#include "Day1.h"
#include "Day2.h"

#include <iostream>

using namespace std;

void day1() {
    Day1 day;

    vector<string> stringLines = day.loadLines("../data/day1.txt");
    vector<int> data = day.parseIntergerLines(stringLines);

    cout << "Day 1 part 1 " << day.part1(data) << endl;
    cout << "Day 1 part 2 " << day.part2(data) << endl;
}

void day2() {
    Day2 day;

    string line = day.loadLine("../data/day2.txt");
    
    cout << "Day 1 part 1 " << day.part1(line) << endl;
    cout << "Day 1 part 2 " << day.part2(line) << endl;
}


int main() {
    day1();
    day2();

    return 0;
}