
#include "Day3.h"

#include <iostream>
#include <numeric>
#include <list>
#include <algorithm>

using namespace std;

Day3::Day3() {

}

long Day3::process1(vector<string> lines) {
    long gamma = 0;
    long epsilon = 0;

    size_t size = lines[0].size();

    for (size_t i = 0; i < size; i++) {
        if (mostCommon(lines, i, 0) == 0) {
            gamma = gamma << 1;
            epsilon = (epsilon << 1) + 1;
        } else {
            gamma = (gamma << 1) + 1;
            epsilon = (epsilon << 1);
        }
    }

    return gamma * epsilon;
}

int Day3::mostCommon(vector<string> lines, int index, int equal) {
    int zero = 0;
    int one = 0;

    for (string line : lines) {
        if (line[index] == '0') {
            zero++;
        } else {
            one++;
        }
    }

    if (zero == one) {
        return equal;
    }

    if (zero > one) {
        return 0;
    } 

    return 1;    
}

long Day3::process2(vector<string> lines) {
    long oxygen = 0;

    vector<string> olines(lines);

    int index = 0;

    while (olines.size() > 1) {
        int common = mostCommon(olines, index, 1);

        char filter = '0';

        if (common) {
            filter = '1';
        }

        olines.erase(remove_if(olines.begin(), olines.end(), [=](string line){ return (line[index] != filter); }), olines.end());

        index++;
    }

    oxygen = binToDec(olines[0]);

    long co2 = 0;

    vector<string> clines(lines);

    index = 0;

    while (clines.size() > 1) {
        int common = mostCommon(clines, index, 1);

        char filter = '1';

        if (common) {
            filter = '0';
        }

        clines.erase(remove_if(clines.begin(), clines.end(), [=](string line){ return (line[index] != filter); }), clines.end());

        index++;
    }

    co2 = binToDec(clines[0]);

    return oxygen * co2;
}

long Day3::binToDec(string line) {
    long res = 0;

    for (char c : line) {
        if (c == '1') {
            res = (res << 1) + 1;
        } else {
            res = (res << 1);
        }
    }

    return res;
}