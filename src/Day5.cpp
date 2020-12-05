
#include "Day5.h"

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

Day5::Day5() {

}

int Day5::computeReduction(string rules, int low, int high, char lower, char upper) {
    for (size_t i = 0; i < rules.size(); i++) {
        char c = rules.at(i);

        if (c == lower) {
            high = low + ((high - low + 1) / 2) - 1;
        } else if (c == upper) {
            low = low + (high - low + 1) / 2;
        }
    }

    return low;
}

int Day5::computeSeatId(string boardingPass) {

    int row = computeReduction(boardingPass.substr(0, 7), 0, 127, 'F', 'B');

    int seat = computeReduction(boardingPass.substr(7, 3), 0, 7, 'L', 'R');
    
    return row * 8 + seat;
}

int Day5::process1(vector<string> input) {
    int max = 0;

    for(string line: input) {
        int seatId = computeSeatId(line);

        if (seatId > max) {
            max = seatId;
        }
    }

    return max;
}

int Day5::process2(vector<string> input) {
    int max = 0;
    int min = 1024;

    vector<int> seats;

    for(string line: input) {
        int seatId = computeSeatId(line);

        if (seatId > max) {
            max = seatId;
        }

        if (seatId < min) {
            min = seatId;
        }

        seats.push_back(seatId);
    }

    for (int i = min; i < max; i++) {
        if (find(seats.begin(), seats.end(), i) == seats.end()) {
            return i;
        }
    }

    return -1;
}
