
#include "Day2.h"

#include <iostream>

using namespace std;

Day2::Day2() {

}

int Day2::process1(vector<string> input) {
    int ok = 0;

    for(string line: input) {
        size_t index;
        size_t pos;

        index = line.find('-');

        int min = atoi(line.substr(0, index).c_str());
        pos = index + 1;

        index = line.find(' ', pos);
        int max = atoi(line.substr(pos, index).c_str());
        pos = index + 1;

        char test = line.at(pos);

        pos = pos + 3;

        int count = 0;

        for (size_t i = pos; i < line.size(); i++) {
            if (test == line.at(i)) {
                count++;
            }
        }

        if (min <= count && count <= max) {
            ok++;
        }

    }

    return ok;
}

int Day2::process2(vector<string> input) {
    int ok = 0;

    for(string line: input) {
        // parse line
        size_t index;
        size_t pos;

        index = line.find('-');

        int pos1 = atoi(line.substr(0, index).c_str());
        pos = index + 1;

        index = line.find(' ', pos);
        int pos2 = atoi(line.substr(pos, index).c_str());
        pos = index + 1;

        char test = line.at(pos);

        pos = pos + 3;

        char c1 = line.at(pos + pos1 - 1);
        char c2 = line.at(pos + pos2 - 1);

        if ((test == c1 || test == c2) && c1 != c2) {
            ok++;
        }

    }

    return ok;
}