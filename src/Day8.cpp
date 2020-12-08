
#include "Day8.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm> 

using namespace std;

Day8::Day8() {

}

int Day8::runProgramm(vector<string> input, bool* fail) {
    int accumulator = 0;
    size_t lineNo = 0;

    *fail = false;

    set<int> lines;

    while (lines.find(lineNo) == lines.end()) {
        if (lineNo == input.size()) return accumulator;

        string line = input.at(lineNo);

        lines.insert(lineNo);

        int index = line.find_first_of(" ");

        string cmd = line.substr(0, index);
        int change = atoi(line.substr(index + 1).c_str());

        if (cmd == "nop") {
            lineNo++;
        } else if (cmd == "acc") {
            accumulator += change;

            lineNo++;
        } else if (cmd == "jmp") {
            lineNo += change;
        }
    }

    *fail = true;

    return accumulator;
}

int Day8::process1(vector<string> input) {
    bool fail = false;

    int res = runProgramm(input, &fail);

    return res;
}

int Day8::process2(vector<string> input) {
    int lines = input.size();

    for (int i = 0; i < lines; i++) {
        string line = input.at(i);

        if (line.substr(0, 3) == "nop") {
            vector<string> test = input;

            line[0] = 'j';
            line[1] = 'm';
            line[2] = 'p';

            test[i] = line;

            bool fail = false;

            int res = runProgramm(test, &fail);

            if (!fail) {
                return res;
            }
        } else if (line.substr(0, 3) == "jmp") {
            vector<string> test = input;

            line[0] = 'n';
            line[1] = 'o';
            line[2] = 'p';

            test[i] = line;

            bool fail = false;

            int res = runProgramm(test, &fail);

            if (!fail) {
                return res;
            }
        }
    }

    return -1;
}
