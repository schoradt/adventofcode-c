
#include "Day4.h"

#include <iostream>
#include <map>
#include <regex>

using namespace std;

Day4::Day4() {

}

vector<Passport*> Day4::loadPassports(vector<string> input) {
    vector<map<string, string>*> passports;

    Passport* passport = new Passport();

    for(string line: input) {
        if (line == "") {
            /**
             * An empty line marks a new passport.
             */
            passports.push_back(passport);

            passport = new Passport();
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

    return passports;
}

bool Day4::checkRequiredFields(const Passport* passport) {
    vector<string> required = {"byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid"};

    for (auto const &req: required) {
        if ( passport->find(req) == passport->end() ) {
            return false;
        }
    }

    return true;
}

bool Day4::checkNumber(const string number) {
    return regex_match(number, regex(("((\\+|-)?[[:digit:]]+)(\\.(([[:digit:]]+)?))?" )));
}

bool Day4::checkYearOfBirth(const Passport* passport) {
    string byr = passport->at("byr");

    if (!checkNumber(byr)) {
        return false;
    }

    char* p;
    long year = strtol(byr.c_str(), &p, 10);

    if (year < 1902 || year > 2002) {
        return false;
    }

    return true;
}

bool Day4::checkYearOfIssue(const Passport* passport) {
    string iyr = passport->at("iyr");

    if (!checkNumber(iyr)) {
        return false;
    }

    char* p;
    long year = strtol(iyr.c_str(), &p, 10);

    if (year < 2010 || year > 2020) {
        return false;
    }

    return true;
}

bool Day4::checkYearOfExpiration(const Passport* passport) {
    string iyr = passport->at("eyr");

    if (!checkNumber(iyr)) {
        return false;
    }

    char* p;
    long year = strtol(iyr.c_str(), &p, 10);

    if (year < 2020 || year > 2030) {
        return false;
    }

    return true;
}

bool Day4::checkHeight(const Passport* passport) {
    string str = passport->at("hgt");

    string unit = str.substr(str.size() - 2);
    str = str.substr(0, str.size() - 2);

    if (!checkNumber(str)) {
        return false;
    }

    char* p;
    long value = strtol(str.c_str(), &p, 10);

    if (unit == "cm") {
        if (value < 150 || value > 193) {
            return false;
        }
    } else if (unit == "in") {
        if (value < 59 || value > 76) {
            return false;
        }
    } else {
        return false;
    }

    return true;
}

bool Day4::checkHairColor(const Passport* passport) {
    string str = passport->at("hcl");

    return regex_match(str, regex(("\\#[0-9a-f]{6}")));
}

bool Day4::checkEyeColor(const Passport* passport) {
    string str = passport->at("ecl");

    if (!(str == "amb" || str == "blu" || str == "brn" || str == "gry" || str == "grn" || str == "hzl" || str == "oth" )) {
        return false;
    }

    return true;
}

bool Day4::checkPassportId(const Passport* passport) {
    string str = passport->at("pid");

    if (!regex_match(str, regex(("[0-9]{9}")))) {
        return false;
    }

    return true;
}

int Day4::process1(vector<string> input) {
    vector<Passport*> passports = this->loadPassports(input);

    int valid = 0;

    for (const Passport* passport: passports) {
        bool ok = true;

        ok = ok && checkRequiredFields(passport);

        if (ok) valid++;
    }

    return valid;
}

int Day4::process2(vector<string> input) {
    vector<map<string, string>*> passports = this->loadPassports(input);

    int valid = 0;

    for ( const auto &passport: passports) {
        bool ok = true;

        ok = ok && checkRequiredFields(passport);
        ok = ok && checkYearOfBirth(passport);
        ok = ok && checkYearOfIssue(passport);
        ok = ok && checkYearOfExpiration(passport);
        ok = ok && checkHeight(passport);
        ok = ok && checkHairColor(passport);
        ok = ok && checkEyeColor(passport);
        ok = ok && checkPassportId(passport);

        if (ok) {
            valid++;
        }
    }

    return valid;
}
