
#include "Day5.h"

#include <iostream>
#include <map>
#include <regex>

using namespace std;

Day5::Day5() {

}

int Day5::computeSeatId(string boardingPass) {
    int low = 0;
    int high = 127;

    for (int i = 0; i < 6; i++) {
        char c = boardingPass.at(i);

        if (c == 'F') {
            high = low + ((high - low + 1) / 2) - 1;
        } else if (c == 'B') {
            low = low + (high - low + 1) / 2;
        }

        //cout << "HL - " << c << " : " << low << " - " << high << endl;
    }

    int row = 0;

    char c = boardingPass.at(6);

    if (c == 'F') {
        row = low;
    } else if (c == 'B') {
        row = high;
    }

    //cout << "HL - " << c << " : " << low << " - " << high << endl;

    low = 0;
    high = 7;

    for (int i = 7; i < 9; i++) {
        char c = boardingPass.at(i);

        if (c == 'L') {
            high = low + ((high - low + 1) / 2) - 1;
        } else if (c == 'R') {
            low = low + (high - low + 1) / 2;
        }

        // cout << "HL - " << c << " : " << low << " - " << high << endl;
    }

    int seat = 0;

    c = boardingPass.at(9);

    if (c == 'L') {
        seat = low;
    } else if (c == 'R') {
        seat = high;
    }

    //cout << "HL - " << c << " : " << low << " - " << high << endl;

    // cout << row << " - " << seat;

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
    return -1;
}
