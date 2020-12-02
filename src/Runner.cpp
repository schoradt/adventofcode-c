
#include "Day1.h"
#include "Day2.h"

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono; 

void day1() {
    Day1 day;

    vector<int> input = day.parseIntergerLines(day.loadLines("../data/day1.txt"));

    auto start = high_resolution_clock::now(); 
    int res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 1 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    int res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 1 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day2() {
    Day2 day;

    vector<string> input = day.loadLines("../data/day2.txt");

    auto start = high_resolution_clock::now(); 
    int res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 2 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    int res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 2 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}


int main() {
    day1();
    day2();

    return 0;
}