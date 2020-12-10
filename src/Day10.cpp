
#include "Day10.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm> 

using namespace std;

Day10::Day10() {

}

bool sortOperator (int i, int j) { return (i > j); }

long Day10::process1(vector<int> input) {
    int volt = 0;

    int step1 = 0;
    int step3 = 0;

    int max = *max_element(input.begin(), input.end());

    vector<int> sorted = input;

    sort(sorted.begin(), sorted.end(), sortOperator);
    
    while (volt < max) {
        int next = sorted.back();

        if (next - volt == 1) {
            step1++;
        } else if (next - volt == 3) {
            step3++;
        }

        volt =+ next;

        sorted.pop_back();
    }

    step3++;

    return step1 * step3;
}

long computeVariants3(vector<int>* sorted, map<size_t, long>* cache, size_t index) {
    long vars = 0;

    if ((*cache)[index]) {
        return (*cache)[index];
    }

    size_t size = sorted->size();

    if (index == size) {
        return 1;
    }

    vars = vars + computeVariants3(sorted, cache, index + 1);

    if (index + 2 < size && sorted->at(index + 2) - sorted->at(index) <= 3) {
        vars = vars + computeVariants3(sorted, cache, index + 2);
    }

    if (index + 3 < size && sorted->at(index + 3) - sorted->at(index) <= 3) {
        vars = vars + computeVariants3(sorted, cache, index + 3);
    }

    (*cache)[index] = vars;

    return vars;
}


long Day10::process2(vector<int> input) {
    //int max = *max_element(input.begin(), input.end());

    vector<int> sorted = input;

    sorted.push_back(0);

    sort(sorted.begin(), sorted.end());

    map<size_t, long> cache;

    //return computeVariants2(&sorted, 0, 0, max);
    return computeVariants3(&sorted, &cache, 0);
}
