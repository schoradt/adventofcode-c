
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

long Day15::playGame(vector<int> input, size_t target) {
    map<long, size_t> helper;
    map<long, size_t>::iterator it;

    int index = -1;

    long last = 0;

    for(int i: input) {
        if (index >= 0) {
            helper[last] = index;
        }

        last = i;

        index++;
    }

    while (index + 1 < (int)target) {
        int lastIndex = index;
        long comp;
        
        it = helper.find(last);

        if (it == helper.end()) {
            comp = 0;
        } else {
            comp = lastIndex - it->second;
        }

        helper[last] = lastIndex;

        last = comp;
        index++;
    }

    return last;
}

long Day15::process1(vector<int> input) {
    return playGame(input, 2020);
}

long Day15::process2(vector<int> input) {
    return playGame(input, 30000000);
}
