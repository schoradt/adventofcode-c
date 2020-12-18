
#include "Day1.h"
#include "Day2.h"
#include "Day3.h"
#include "Day4.h"
#include "Day5.h"
#include "Day6.h"
#include "Day7.h"
#include "Day8.h"
#include "Day9.h"
#include "Day10.h"
#include "Day11.h"
#include "Day12.h"
#include "Day13.h"
#include "Day14.h"
#include "Day15.h"
#include "Day16.h"
#include "Day17.h"
#include "Day18.h"

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono; 

void day1() {
    Day1 day;

    vector<int> input = day.parseIntegerLines(day.loadLines("../data/day1.txt"));

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

    vector<string> input = day.loadLines("../data/day6.txt");

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

void day7() {
    Day7 day;

    vector<string> input = day.loadLines("../data/day7.txt");

    auto start = high_resolution_clock::now(); 
    int res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 7 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 7 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day8() {
    Day8 day;

    vector<string> input = day.loadLines("../data/day8.txt");

    auto start = high_resolution_clock::now(); 
    int res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 8 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 8 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day9() {
    Day9 day;

    vector<long> input = day.parseLongLines(day.loadLines("../data/day9.txt"));

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input, 25);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 9 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input, 25, res1);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 9 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day10() {
    Day10 day;

    vector<int> input = day.parseIntegerLines(day.loadLines("../data/day10.txt"));

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 10 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 10 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day11() {
    Day11 day;

    vector<string> input = day.loadLines("../data/day11.txt");

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 11 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 11 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day12() {
    Day12 day;

    vector<string> input = day.loadLines("../data/day12.txt");

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 12 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 12 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day13() {
    Day13 day;

    vector<string> input = day.loadLines("../data/day13.txt");

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 13 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input, 100000000000000);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 13 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day14() {
    Day14 day;

    vector<string> input = day.loadLines("../data/day14.txt");

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 14 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input, 100000000000000);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 14 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day15() {
    Day15 day;

    vector<int> input = day.parseIntegerLines(day.splitLine("1,0,16,5,17,4"));

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 15 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    //long res2 = day.process2(input);
    long res2 = 573522; 
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    //cout << "Day 15 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
    cout << "Day 15 part 2 " << res2 << " (static)" << endl;
}

void day16() {
    Day16 day;

    vector<string> input = day.loadLines("../data/day16.txt");

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 16 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 16 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day17() {
    Day17 day;

    vector<string> input = day.loadLines("../data/day17.txt");

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 17 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 17 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}

void day18() {
    Day18 day;

    vector<string> input = day.loadLines("../data/day18.txt");

    auto start = high_resolution_clock::now(); 
    long res1 = day.process1(input);
    auto stop = high_resolution_clock::now(); 

    auto duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 18 part 1 " << res1 << " (" << duration.count() << " microseconds)" << endl;

    start = high_resolution_clock::now(); 
    long res2 = day.process2(input);
    stop = high_resolution_clock::now(); 

    duration = duration_cast<microseconds>(stop - start); 

    cout << "Day 18 part 2 " << res2 << " (" << duration.count() << " microseconds)" << endl;
}


int main() {
    day1();
    day2();
    day3();
    day4();
    day5();
    day6();
    day7();
    day8();
    day9();
    day10();
    day11();
    day12();
    day13();
    day14();
    day15();
    day16();
    // day17();
    day18();

    return 0;
}