
#include "Day11.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm> 

using namespace std;

Day11::Day11() {

}

bool processSeat(vector<string>* input, vector<string>* change, int x, int y) {
    // foor never changes
    if ((*input).at(y).at(x) == '.') return false;

    int occ = 0;

    for (int i = -1; i <= 1; i++) {
        if (y + i >= 0 && y + i < (int)(*input).size()) {
            for (int j = -1; j <= 1; j++) {
                if (x + j >= 0 && x + j < (int)(*input).at(y + i).size()) {
                    if ((*input).at(y + i).at(x + j) == '#' && !(i == 0 && j == 0)) {
                        occ++;
                    }
                }
            }
        }
    }

    if ((*input).at(y).at(x) == 'L' && occ == 0) {
        (*change).at(y)[x] = '#';

        return true;
    } 

    if ((*input).at(y).at(x) == '#' && occ >= 4) {
        (*change).at(y)[x] = 'L';

        return true;
    } 

    return false;
}

long Day11::process1(vector<string> input) {
    int changes = 1;
    //int loop = 0;

    vector<string> before = input;
    vector<string> process = input;

    while (changes != 0) {
        changes = 0;
        before = process;
    
        //cout << "Loop " << ++loop << endl;
        //for (size_t i = 0; i < process.size(); i++) cout << process.at(i) << endl;

        for (size_t i = 0; i < process.size(); i++) {
            for (size_t j = 0; j < process.at(i).size(); j++) {
                if (processSeat(&before, &process, j, i)) {
                    changes++;
                }
            }
        }
    }

    int persons = 0;

    for (size_t i = 0; i < process.size(); i++) {
        for (size_t j = 0; j < process.at(i).size(); j++) {
            if (process.at(i).at(j) == '#') {
                persons++;
            }
        }
    }

    return persons;
}

long Day11::process2(vector<string> input) {
    return -1;
}
