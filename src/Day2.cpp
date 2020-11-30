
#include "Day2.h"

#include <iostream>

#include <math.h>

using namespace std;

Day2::Day2() {

}

int Day2::part1(string program) {
    return 0;
}

int Day2::part2(string program) {
    return 0;
}

void Day2::intcodeCompute(vector<int> *program) {
    int pos = 0;

    while(true) {
        int opcode = (*program)[pos];

        if (opcode == 1) {
            (*program)[pos+3] = (*program)[pos+1] + (*program)[pos+2];
        } else if (opcode == 2) {
            (*program)[pos+3] = (*program)[pos+1] * (*program)[pos+2];
        } else if (opcode == 99) {
            return;
        }
    }
}