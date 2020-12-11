
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
    int changes = 0;
    //int loop = 0;

    vector<string> before = input;
    vector<string> process = input;

    do {
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
    } while (changes != 0); 

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

bool processSeat2(vector<string>* input, vector<string>* change, int x, int y) {
    // foor never changes
    if ((*input).at(y).at(x) == '.') return false;

    int occ = 0;

    int sizeY = (*input).size();
    int sizeX = (*input).at(0).size();

    // up
    for (int i = 1; y - i >= 0; i++) {
        if ((*input).at(y - i).at(x) == '#') {
            occ++;
        }

        if ((*input).at(y - i).at(x) != '.') {
            break;
        }
    }

    // down
    for (int i = 1; y + i < sizeY; i++) {
        if ((*input).at(y + i).at(x) == '#') {
            occ++;
        }

        if ((*input).at(y + i).at(x) != '.') {
            break;
        }
    }

    // left
    for (int i = 1; x - i >= 0; i++) {
        if ((*input).at(y).at(x - i) == '#') {
            occ++;
        }

        if ((*input).at(y).at(x - i) != '.') {
            break;
        }
    }

    // right
    for (int i = 1; x + i < sizeX; i++) {
        if ((*input).at(y).at(x + i) == '#') {
            occ++;
        }

        if ((*input).at(y).at(x + i) != '.') {
            break;
        }
    }

    for (int i = 1; y + i < sizeY && x + i < sizeX; i++) {
        if ((*input).at(y + i).at(x + i) == '#') {
            occ++;
        }

        if ((*input).at(y + i).at(x + i) != '.') {
            break;
        }
    }
    
    for (int i = 1; y - i >= 0 && x + i < sizeX; i++) {
        if ((*input).at(y - i).at(x + i) == '#') {
            occ++;
        }

        if ((*input).at(y - i).at(x + i) != '.') {
            break;
        }
    }

    for (int i = 1; y - i >= 0 && x - i >= 0; i++) {
        if ((*input).at(y - i).at(x - i) == '#') {
            occ++;
        }

        if ((*input).at(y - i).at(x - i) != '.') {
            break;
        }
    }

    for (int i = 1; y + i < sizeY && x - i >= 0; i++) {
        if ((*input).at(y + i).at(x - i) == '#') {
            occ++;
        }

        if ((*input).at(y + i).at(x - i) != '.') {
            break;
        }
    }

    //cout << "Test " << x << ", " << y << " => " << occ << endl; 

    if ((*input).at(y).at(x) == 'L' && occ == 0) {
        (*change).at(y)[x] = '#';

        return true;
    } 

    if ((*input).at(y).at(x) == '#' && occ >= 5) {
        (*change).at(y)[x] = 'L';

        return true;
    } 

    return false;
}

long Day11::process2(vector<string> input) {
    int changes = 0;
    //int loop = 0;

    vector<string> before = input;
    vector<string> process = input;

    do {
        changes = 0;
        before = process;
    
        //cout << "Loop " << ++loop << endl;
        //for (size_t i = 0; i < process.size(); i++) cout << process.at(i) << endl;

        for (size_t i = 0; i < process.size(); i++) {
            for (size_t j = 0; j < process.at(i).size(); j++) {
                if (processSeat2(&before, &process, j, i)) {
                    changes++;
                }
            }
        }
    } while (changes != 0); 

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
