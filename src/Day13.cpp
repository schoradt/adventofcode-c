
#include "Day13.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <list>
#include <algorithm> 

using namespace std;

Day13::Day13() {

}

long Day13::process1(vector<string> input) {
    long ts = atol(input.at(0).c_str());

    vector<string> busses = splitLine(input.at(1));

    vector<int> times;

    int minBus = 0;
    int wait = INT32_MAX;

    for (string bus: busses) {
        if (bus == "x") {
            times.push_back(-1);

            continue;
        };

        int busNr = atoi(bus.c_str());

        int next = busNr - (ts % busNr);

        // cout << "BUS " << bus << " -> " << next << endl;

        if (next < wait) {
            wait = next;
            minBus = busNr;
        }
    }

    return minBus * wait;
}




long Day13::process2(vector<string> input, long start) {
    vector<string> busses = splitLine(input.at(1));

    long test = start;

    long step = 1;
    int nextStep = -1;

    int j = 0;

    list<int> steps;

    for (string bus: busses) {
        if (bus != "x") {
            steps.push_back(j);
        }

        j++;
    }

    nextStep = steps.front();
    steps.pop_front();

    while (true) {
        bool success = true;
        
        int i = 0;
        
        for (string bus: busses) {
            if (bus == "x") {
                i++;

                continue;
            };

            int busNr = atoi(bus.c_str());

            if (((test + i) % busNr) != 0) {
                success = false;

                break;
            } else if (i == nextStep) {
                step = step * busNr;
                
                if (!steps.empty()) {
                    nextStep = steps.front();
                    steps.pop_front();
                }
            }

            i++;
        }

        if (success) {
            return test;
        }

        test = test + step;
    }

    return -1;
}
