
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
    return -1;
}
