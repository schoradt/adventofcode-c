
#include "Day3.h"

#include <iostream>

using namespace std;

Day3::Day3() {

}

int Day3::process1(vector<string> input) {
    size_t x = 0;
    size_t y = 0;

    int length = input.at(0).size();

    int trees = 0;

    while (y < input.size()) {
        if (input.at(y).at(x) == '#') {
            trees++;
        }

        x = (x + 3) % length;
        y = y + 1;
    }

    return trees;
}

int Day3::process2(vector<string> input) {
    
    return -1;
}
