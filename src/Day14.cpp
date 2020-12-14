
#include "Day14.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <list>
#include <algorithm> 

using namespace std;

Day14::Day14() {

}

long Day14::process1(vector<string> input) {

    map<int, long> memory;

    string mask;

    for (string line: input) {
        if (line.substr(0, 4) == "mask") {
            mask = line.substr(7);

            continue;
        }

        if (line.substr(0, 3) == "mem") {
            int index = line.find(']');

            long address = atol(line.substr(4, index - 4).c_str());

            long value = atol(line.substr(index + 4).c_str());

            // cout << "ADDRESS " << address << " <- " << value << endl;

            int size = mask.size();

            for (int i = 0; i < size; i++) {
                if (mask[size - 1 - i] == '1') {
                    value |= 1UL << i;
                } else if (mask[size - 1 - i] == '0') {
                    value &= ~(1UL << i);
                }
            }

            memory[address] = value;
        }
    }

    long sum = 0;

    for (auto &e: memory) {
        sum += e.second;
    }

    return sum;
}

long Day14::process2(vector<string> input, long start) {
    map<long, long> memory;

    string mask;

    for (string line: input) {
        if (line.substr(0, 4) == "mask") {
            mask = line.substr(7);

            continue;
        }

        if (line.substr(0, 3) == "mem") {
            int index = line.find(']');

            long address = atol(line.substr(4, index - 4).c_str());

            long value = atol(line.substr(index + 4).c_str());

            int size = mask.size();

            list<long> addresses;
            addresses.push_back(address);

            for (int i = 0; i < size; i++) {
                list<long> old = addresses;

                addresses.clear();

                for (long a: old) {
                    if (mask[size - 1 - i] == '1') {
                        a |= 1UL << i;
                        addresses.push_back(a);
                    } else if (mask[size - 1 - i] == 'X') {
                        a |= 1UL << i;
                        addresses.push_back(a);

                        a &= ~(1UL << i);
                        addresses.push_back(a);
                    } else {
                        addresses.push_back(a);
                    }
                }
            }

            for (long a: addresses) {
                memory[a] = value;
            }
        }
    }

    long sum = 0;

    for (auto &e: memory) {
        sum += e.second;
    }

    return sum;
}
