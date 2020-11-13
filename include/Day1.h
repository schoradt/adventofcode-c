
#include "Base.h"

class Day1: public Base
{
private:
    /* data */
public:
    Day1(/* args */);

    int part1(vector<int> masses);
    int part2(vector<int> masses);

    int computeFuel(int mass);

    int computeFuelWithFuel(int mass);

};
