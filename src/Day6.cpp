
#include "Day6.h"

#include <iostream>
#include <set>
#include <algorithm> 

using namespace std;

Day6::Day6() {

}

int Day6::process1(vector<string> input) {
    set<char>* answers = new set<char>();

    int sum = 0;

    for(string line: input) {
        if (line == "") {
            sum += answers->size();

            answers = new set<char>();
        } else {
            for(char answer: line) {
                answers->insert(answer);
            }
        }
    }

    sum += answers->size();

    return sum;
}

int Day6::process2(vector<string> input) {

    return -1;
}
