
#include "Base.h"

#include <map>
#include <string>

using namespace std;

class Day15: public Base
{
private:
    // private vars
    long playGame(vector<int> input, size_t target);

public:
    Day15(/* args */);

    long process1(vector<int> input);

    long process2(vector<int> input);
};
