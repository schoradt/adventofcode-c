
#include "Base.h"

#include <map>
#include <string>

using namespace std;

class Day8: public Base
{
private:
    // private vars
    int runProgramm(vector<string> input, bool* fail);

public:
    Day8(/* args */);

    int process1(vector<string> input);

    int process2(vector<string> input);
};
