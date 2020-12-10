
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

long Day10::process2(vector<int> input) {
    
    return -1;
}
