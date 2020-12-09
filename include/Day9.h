
#include "Base.h"

#include <map>
#include <string>

using namespace std;

class Day9: public Base
{
private:
    // private vars
public:
    Day9(/* args */);

    long process1(vector<long> input, int length);

    long process2(vector<long> input, int length, long invalid);
};
