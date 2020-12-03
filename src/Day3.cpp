
#include "Day3.h"

#include <iostream>

using namespace std;

Day3::Day3() {

}

int Day3::traverseSlope(vector<string> input, size_t stepX, size_t stepY) {
    size_t x = 0;
    size_t y = 0;

    int length = input.at(0).size();

    int trees = 0;

    while (y < input.size()) {
        if (input.at(y).at(x) == '#') {
            trees++;
        }

        x = (x + stepX) % length;
        y = y + stepY;
    }

    return trees;
}

int Day3::process1(vector<string> input) {
    return traverseSlope(input, 3, 1);
}

long Day3::process2(vector<string> input) {
    long product = 1;

    product = product * traverseSlope(input, 1, 1);
    product = product * traverseSlope(input, 3, 1);
    product = product * traverseSlope(input, 5, 1);
    product = product * traverseSlope(input, 7, 1);
    product = product * traverseSlope(input, 1, 2);

    return product;
}
