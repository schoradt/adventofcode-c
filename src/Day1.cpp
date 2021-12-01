
#include "Day1.h"

#include <iostream>
#include <numeric>

using namespace std;

Day1::Day1() {

}

int Day1::process1(vector<int> lines) {
    int increases = 0;
    int lastValue = -1;

    for(const auto& value: lines) {
        if (lastValue > 0) {
            if (value > lastValue) {
                increases++;
            }
        }

        lastValue = value;
    }

    return increases;
}

int Day1::process2(vector<int> lines) {
    int increases = 0;
    for(auto it = begin(lines) + 3; it != end(lines); ++it) {
        auto start = it - 2;
        auto end = it + 1;

        int prevWindow = accumulate(start - 1, end - 1, 0);
        int actWindow = accumulate(start, end, 0);

        if (prevWindow < actWindow) {
            increases++;
        }
    }

    return increases;
}