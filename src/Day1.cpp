
#include "Day1.h"

#include <iostream>

#include <math.h>

using namespace std;

Day1::Day1() {

}

int Day1::part1(vector<int> masses) {
    int fuel = 0;

    for(const auto& mass: masses) {
        fuel += this->computeFuel(mass);
    }

    return fuel;
}

int Day1::part2(vector<int> masses) {
    int fuel = 0;

    for(const auto& mass: masses) {
        fuel += this->computeFuelWithFuel(mass);
    }

    return fuel;
}


int Day1::computeFuel(int mass) {
    return floor((double)mass / 3) - 2;
}

int Day1::computeFuelWithFuel(int mass) {
    int fuel = this->computeFuel(mass);

    int extra = this->computeFuel(fuel);

    while(extra > 0) {
        fuel += extra;

        extra = this->computeFuel(extra);
    }

    return fuel;
}