
#include "Day1.h"

#include <iostream>

using namespace std;

Day1::Day1() {

}

int Day1::process1(vector<int> input) {
    int targetSum = 2020;

    for(const auto& a: input) {
        for(const auto& b: input) {
            if (a + b == targetSum) {
                return (a * b);
            }
        }
    }

    return -1;
}

int Day1::process2(vector<int> input) {
    int targetSum = 2020;

    for(const auto& a: input) {
        for(const auto& b: input) {
            for(const auto& c: input) {
                if (a + b + c == targetSum) {
                    return (a * b * c);
                }
            }
        }
    }

    return -1;
}