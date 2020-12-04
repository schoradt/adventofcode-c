
#include "Base.h"

#include <map>
#include <string>

using namespace std;

typedef map<string, string > Passport;

class Day4: public Base
{
private:
    // private vars
    vector<Passport*> loadPassports(vector<string> input);

    bool checkRequiredFields(const Passport*);

    bool checkNumber(const string number);

    bool checkYearOfBirth(const Passport*);
    bool checkYearOfIssue(const Passport*);
    bool checkYearOfExpiration(const Passport*);

    bool checkHeight(const Passport*);

    bool checkHairColor(const Passport*);
    bool checkEyeColor(const Passport*);

    bool checkPassportId(const Passport*);

public:
    Day4(/* args */);

    int process1(vector<string> input);

    int process2(vector<string> input);
};
