
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

int Day8::process1(vector<string> input) {
    int accumulator = 0;
    int lineNo = 0;

    set<int> lines;

    while (lines.find(lineNo) == lines.end()) {
        string line = input.at(lineNo);

        lines.insert(lineNo);

        int index = line.find_first_of(" ");

        string cmd = line.substr(0, index);
        int change = atoi(line.substr(index + 1).c_str());

        //cout << "CMD: " << cmd << " NO" << change << " ACC: " << accumulator << endl;

        if (cmd == "nop") {
            lineNo++;
        } else if (cmd == "acc") {
            accumulator += change;

            lineNo++;
        } else if (cmd == "jmp") {
            lineNo += change;
        }
    }

    return accumulator;
}

int Day8::process2(vector<string> input) {
    
    return -1;
}
