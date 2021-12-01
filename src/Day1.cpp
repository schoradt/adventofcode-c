
#include "Day1.h"

#include <iostream>

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
    
    for (std::vector<int>::size_type i = 3; i < lines.size(); i++) {
        int prevWindow = lines[i - 3] + lines[i - 2] + lines[i - 1];
        int actWindow = lines[i - 2] + lines[i - 1] + lines[i];

        if (prevWindow < actWindow) {
            increases++;
        }
    }

    return increases;
}