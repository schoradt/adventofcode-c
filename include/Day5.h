
#include "Base.h"

#include <map>
#include <string>

using namespace std;

class Day5: public Base
{
private:
    // private vars
    int computeReduction(string rules, int low, int high, char lower, char upper);

public:
    Day5(/* args */);

    int computeSeatId(string boardingPass);

    int process1(vector<string> input);

    int process2(vector<string> input);
};
