
#include "Day13.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <tuple>
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

long Day13::process2(vector<string> input) {
    return -1;
}
