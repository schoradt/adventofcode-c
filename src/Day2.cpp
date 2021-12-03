
#include "Day2.h"

#include <iostream>
#include <numeric>

using namespace std;

Day2::Day2() {

}

int Day2::process1(vector<string> lines) {
    int position = 0;
    int depth = 0;

    for(const auto& line: lines) {
        vector<string> parsed = this->splitLine(line, " ");

        string cmd = parsed[0];
        int number = std::stoi(parsed[1]);

        if (cmd == "forward") {
            position += number;
        } else if (cmd == "down") {
            depth += number;
        } else if (cmd == "up") {
            depth -= number;
        }
    }
    
    return position * depth;
}

int Day2::process2(vector<string> lines) {
    int position = 0;
    int depth = 0;
    int aim = 0;

    for(const auto& line: lines) {
        vector<string> parsed = this->splitLine(line, " ");

        string cmd = parsed[0];
        int number = std::stoi(parsed[1]);

        if (cmd == "forward") {
            position += number;
            depth += aim * number;
        } else if (cmd == "down") {
            aim += number;
        } else if (cmd == "up") {
            aim -= number;
        }
    }
    
    return position * depth;
}