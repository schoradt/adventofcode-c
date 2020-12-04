
#include "Day4.h"

#include <iostream>
#include <map>
#include <regex>

using namespace std;

Day4::Day4() {

}

bool isNumber( string token ) {
    return regex_match( token, regex( ( "((\\+|-)?[[:digit:]]+)(\\.(([[:digit:]]+)?))?" ) ) );
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

        // data checks
        if (ok) {
            string byr = (*passport)["byr"];

            if (!isNumber(byr)) {
                ok = false;
            }

            char* p;
            long year = strtol(byr.c_str(), &p, 10);

            if (year < 1902 || year > 2002) {
                ok = false;
            }
        }

        if (ok) {
            string iyr = (*passport)["iyr"];

            if (!isNumber(iyr)) {
                ok = false;
            }

            char* p;
            long year = strtol(iyr.c_str(), &p, 10);

            if (year < 2010 || year > 2020) {
                ok = false;
            }
        }

        if (ok) {
            string iyr = (*passport)["eyr"];

            if (!isNumber(iyr)) {
                ok = false;
            }

            char* p;
            long year = strtol(iyr.c_str(), &p, 10);

            if (year < 2020 || year > 2030) {
                ok = false;
            }
        }

        //cout << "before hgt " << ok << endl;

        if (ok) {
            string str = (*passport)["hgt"];

            //cout << "hgt " << str << endl;

            string unit = str.substr(str.size() - 2);
            str = str.substr(0, str.size() - 2);

            //cout << "hgt -> " << str << " " << unit << endl;

            if (!isNumber(str)) {
                ok = false;
            }

            char* p;
            long value = strtol(str.c_str(), &p, 10);

            if (unit == "cm") {
                if (value < 150 || value > 193) {
                    ok = false;
                }
            } else if (unit == "in") {
                if (value < 59 || value > 76) {
                    ok = false;
                }
            } else {
                ok = false;
            }
        }

        //cout << "before hcl " << ok << endl;

        if (ok) {
            string str = (*passport)["hcl"];

            //cout << "hcl " << str << endl;

            if (!regex_match(str, regex(("\\#[0-9a-f]{6}")))) {
                ok = false;
            }
        }

        if (ok) {
            string str = (*passport)["ecl"];

            if (!(str == "amb" || str == "blu" || str == "brn" || str == "gry" || str == "grn" || str == "hzl" || str == "oth" )) {
                ok = false;
            }
        }

        if (ok) {
            string str = (*passport)["pid"];

            //cout << "hcl " << str << endl;

            if (!regex_match(str, regex(("[0-9]{9}")))) {
                ok = false;
            }
        }

        if (ok) {
            checked++;
        }
    }

    return checked;
}
