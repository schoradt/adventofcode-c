
#include "Day9.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm> 

using namespace std;

Day9::Day9() {

}

int Day9::process1(vector<long> input, int length) {
    size_t end = input.size();

    // check all checkable positions
    for (size_t pos = length; pos < end; pos++) {
        bool found = false;

        for (size_t i = pos - length; i < pos; i++) {
            for (size_t j = pos - length; j < pos; j++) {
                if (i != j) {
                    if (input[i] + input[j] == input[pos]) {
                        found = true;
                    }
                }
            }    
        }

        if (!found) {
            return input[pos];
        }
    }
    
    return -1;
}

int Day9::process2(vector<long> input, int length) {
    
    return -1;
}
