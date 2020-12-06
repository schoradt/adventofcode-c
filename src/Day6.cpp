
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
    set<char>* row = NULL;
    set<char>* answers = NULL;

    int sum = 0;

    for(string line: input) {
        if (line == "") {
            if (answers != NULL) {
                sum += answers->size();
            }
            
            delete answers;

            answers = NULL;
        } else {
            row = new set<char>();

            for(char answer: line) {
                row->insert(answer);
            }

            if (answers == NULL) {
                answers = row;
            } else {
                set<char>* intersect = new set<char>();

                set_intersection(answers->begin(),answers->end(),row->begin(),row->end(), std::inserter(*intersect, intersect->begin()));

                delete row;
                delete answers;
                
                answers = intersect;
            }
        }
    }

    sum += answers->size();

    return sum;
}
