
#include "Base.h"

class Day3: public Base
{
private:
    /* data */
public:
    Day3(/* args */);

    long process1(vector<string> lines);
    long process2(vector<string> lines);
private:

    int mostCommon(vector<string> lines, int index, int equal);
    long binToDec(string line);
};
