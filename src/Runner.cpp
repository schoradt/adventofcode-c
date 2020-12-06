
#include "Day1.h"
#include "Day2.h"
#include "Day3.h"
#include "Day4.h"
#include "Day5.h"
#include "Day6.h"

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

void day3() {
    Day3 day;

    vector<string> input = day.loadLines("../data/day3.txt");

    auto start = high_resolution_clock::now(); 
    int res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 3 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 3 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day4() {
    Day4 day;

    vector<string> input = day.loadLines("../data/day4.txt");

    auto start = high_resolution_clock::now(); 
    int res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 4 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 4 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day5() {
    Day5 day;

    vector<string> input = day.loadLines("../data/day5.txt");

    auto start = high_resolution_clock::now(); 
    int res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 5 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 5 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day6() {
    Day6 day;

    vector<string> input = day.loadLines("../data/day5.txt");

    auto start = high_resolution_clock::now(); 
    int res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 6 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 6 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

int main() {
    day1();
    day2();
    day3();
    day4();
    day5();
    day6();

    return 0;
}