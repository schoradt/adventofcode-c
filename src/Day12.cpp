
#include "Day12.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm> 

using namespace std;

Day12::Day12() {

}

long Day12::process1(vector<string> input) {
    int north = 0;
    int east = 0;

    int degre = 0;

    for (string line: input) {
        char action = line[0];
        int number = atoi(line.substr(1).c_str());

        //cout << "STEP " << "(" << east << ", " << north << ") " << degre << "° - " << action << " -> " << number << endl;

        switch (action) {
            case 'N':
                north = north + number;
                break;
            case 'S':
                north = north - number;
                break;
            case 'E':
                east = east + number;
                break;
            case 'W':
                east = east - number;
                break;
            case 'L': 
                degre = (degre + number) % 360;
                break;
            case 'R': 
                degre = (degre - number) % 360;

                if (degre < 0) degre = 360 + degre;

                break;
            case 'F':
                if (degre == 0 || degre == 360) {
                    east = east + number;
                } else if (degre == 180) {
                    east = east - number;
                } else if (degre == 90) {
                    north = north + number;
                } else if (degre == 270) {
                    north = north - number;
                } else {
                    cout << "ERROR " << "(" << east << ", " << north << ") " << degre << "° - " << action << " -> " << number << endl;    
                }
                break;
            default:
                cout << "ERROR " << "(" << east << ", " << north << ") " << degre << "° - " << action << " -> " << number << endl;
        }
    }

    return abs(north) + abs(east);
}

long Day12::process2(vector<string> input) {
    int north = 0;
    int east = 0;

    int wnorth = 1;
    int weast = 10;

    int degre = 0;

    for (string line: input) {
        char action = line[0];
        int number = atoi(line.substr(1).c_str());

        //cout << "STEP " << "(" << east << ", " << north << ") " << "(" << weast << ", " << wnorth << ") " << " - " << action << " -> " << number << endl;

        int teast;

        switch (action) {
            case 'N':
                wnorth = wnorth + number;
                break;
            case 'S':
                wnorth = wnorth - number;
                break;
            case 'E':
                weast = weast + number;
                break;
            case 'W':
                weast = weast - number;
                break;
            case 'L':
                teast = weast;

                if (number == 0) {
                    // noop
                } else if (number == 90) {
                    weast = -1 * wnorth;
                    wnorth = teast;
                } else if (number == 180) {
                    weast = -1 * weast;
                    wnorth = -1 * wnorth;
                } else if (number == 270) {
                    weast = wnorth;
                    wnorth = -1 * teast;
                } else {
                    cout << "ERROR " << "(" << east << ", " << north << ") " << "(" << weast << ", " << wnorth << ") " << " - " << action << " -> " << number << endl;    
                }

                break;
            case 'R': 
                teast = weast;

                if (number == 0) {
                    // noop
                } else if (number == 270) {
                    weast = -1 * wnorth;
                    wnorth = teast;
                } else if (number == 180) {
                    weast = -1 * weast;
                    wnorth = -1 * wnorth;
                } else if (number == 90) {
                    weast = wnorth;
                    wnorth = -1 * teast;
                } else {
                    cout << "ERROR " << "(" << east << ", " << north << ") " << degre << "° - " << action << " -> " << number << endl;    
                }

                break;
            case 'F':
                east = east + number * weast;
                north = north + number * wnorth;

                break;
            default:
                cout << "ERROR " << "(" << east << ", " << north << ") " << degre << "° - " << action << " -> " << number << endl;
        }
    }

    return abs(north) + abs(east);
}
