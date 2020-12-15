
#include "Day15.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <list>
#include <algorithm> 

using namespace std;

Day15::Day15() {

}

long Day15::process1(vector<int> input) {
    vector<long> memory;

    for(int i: input) {
        memory.push_back(i);
    }

    while (memory.size() < 2020) {
        long last = memory.back();

        //cout << "MEMORY ";
        //for (size_t i = 0; i < memory.size(); i++) cout << memory.at(i) << " ";
        //cout << endl;

        int lastIndex = memory.size() - 1;
        int preIndex = -1;

        for (int i = lastIndex - 1; i >= 0; --i) {
            if (memory[i] == last) {
                preIndex = i;

                break;
            }
        }

        if (preIndex == -1) {
            memory.push_back(0);
        } else {
            memory.push_back(lastIndex - preIndex);
        }
    }

    return memory.back();
}

long Day15::process2(vector<int> input) {
    return -1;
}
