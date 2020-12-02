
#include "Day1.h"
#include "Day2.h"

#include <iostream>

using namespace std;

void day1() {
    Day1 day1;

    vector<int> input = day1.parseIntergerLines(day1.loadLines("../data/day1.txt"));

    cout << "Day 1 part 1 " << day1.process1(input) << endl;
    cout << "Day 1 part 2 " << day1.process2(input) << endl;
}

void day2() {
    Day2 day;

    vector<string> input = day.loadLines("../data/day2.txt");

    cout << "Day 2 part 1 " << day.process1(input) << endl;
    cout << "Day 2 part 2 " << day.process2(input) << endl;
}


int main() {
    day1();
    day2();

    return 0;
}