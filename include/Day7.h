
#include "Base.h"

#include <map>
#include <string>

using namespace std;

class Day7: public Base
{
private:
    // private vars
    string cleanupName(string);

    map<string, vector<tuple<int, string> > >* parseBags(vector<string> input);
public:
    Day7(/* args */);

    int process1(vector<string> input);

    int process2(vector<string> input);
};
