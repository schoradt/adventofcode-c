
#include "Base.h"

class Day3: public Base
{
private:
    // private vars
    int traverseSlope(vector<string> input, size_t stepX, size_t stepY);
public:
    Day3(/* args */);

    int process1(vector<string> input);

    long process2(vector<string> input);
};
