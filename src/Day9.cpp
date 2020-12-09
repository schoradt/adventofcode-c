
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

long Day9::process1(vector<long> input, int length) {
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

long Day9::process2(vector<long> input, int length, long invalid) {
    size_t end = input.size();

    // check all checkable positions
    for (size_t pos = 0; pos < end; pos++) {
        int step = 0;

        long sum = 0;

        long min = __LONG_MAX__;
        long max = 0;

        while (sum < invalid && pos + step < end) {
            long val = input[pos + step];

            sum += input[pos + step];

            if (val < min) min = val;
            if (val > max) max = val;

            if (sum == invalid) {
                return min + max;
            }

            step++;
        }
    }

    return -1;
}
