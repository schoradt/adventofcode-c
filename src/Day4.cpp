
#include "Day4.h"

#include <iostream>
#include <map>

using namespace std;

Day4::Day4() {

}

int Day4::process1(vector<string> input) {
    // parse passports
    vector<map<string, string>*> passports;

    map<string, string>* passport = new map<string, string>();

    for(string line: input) {
        if (line == "") {
            passports.push_back(passport);

            passport = new map<string, string>();
        } else {
            vector<string> elems = this->splitLine(line, " ");

            for(string elem: elems) {
                size_t index = elem.find(":");

                string key = elem.substr(0, index);
                string value = elem.substr(index + 1);

                (*passport)[key] = value;
            }
        }
    }

    vector<string> required = {"byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid"};

    int checked = 0;

    for ( const auto &passport: passports) {
        bool ok = true;

        for (auto const &req: required) {
            if ( passport->find(req) == passport->end() ) {
                ok = false;
            }
        }

        if (ok) {
            checked++;
        }
    }

    return checked;
}

int Day4::process2(vector<string> input) {
    return -1;
}
