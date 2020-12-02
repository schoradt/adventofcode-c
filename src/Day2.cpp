
#include "Day2.h"

#include <iostream>

using namespace std;

Day2::Day2() {

}

int Day2::process1(vector<string> input) {
    int ok = 0;

    for(string line: input) {
        // parse line
        size_t index;
        size_t pos;

        index = line.find('-');

        int min = atoi(line.substr(0, index).c_str());
        pos = index + 1;

        index = line.find(' ', pos);
        int max = atoi(line.substr(pos, index).c_str());
        pos = index + 1;

        char test = line.at(pos);

        //cout << "check " << test << " " << min << " - " << max << endl;

        pos = pos + 2;

        int count = 0;

        for (size_t i = pos; i < line.size(); i++) {
            if (test == line.at(i)) {
                count++;
            }
        }

        //cout << "check " << test << " " << min << " - " << max << " - " << count << endl;

        if (min <= count && count <= max) {
            //cout << "   OK" << endl;

            ok++;
        }

    }

    return ok;
}

int Day2::process2(vector<int> input) {
    return -1;
}