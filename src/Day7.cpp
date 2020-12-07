
#include "Day7.h"

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm> 

using namespace std;

Day7::Day7() {

}

/*
 * Remove the bags ending from the name.
 */
string Day7::cleanupName(string name) {
    if (name.find("bags") != string::npos) {
        return name.substr(0, name.size() - 5);
    } else if (name.find("bag") != string::npos) {
        return name.substr(0, name.size() - 4);
    }

    return name;
}

map<string, vector<tuple<int, string> > >* Day7::parseBags(vector<string> input) {
    map<string, vector<tuple<int, string> > >* bags = new map<string, vector<tuple<int, string> > >();

    for (string line: input) {
        size_t index = line.find("contain");

        if (index == string::npos) continue;

        string name = cleanupName(line.substr(0, index - 1));
        string tail = line.substr(index + 8, line.size() - index - 8 - 1);

        vector<string> elems = splitLine(tail, ", ");

        vector<tuple<int, string> > childs;

        if ( bags->find(name) == bags->end() ) {
            (*bags)[name] = childs;
        }

        for (string elem: elems) {
            int index = elem.find_first_of(" ");

            int num = atoi(elem.substr(0, index).c_str());
            string eName = cleanupName(elem.substr(index + 1));

            (*bags)[name].push_back(std::make_tuple(num, eName));
        }
    }

    return bags;
}

int Day7::process1(vector<string> input) {
    map<string, vector<tuple<int, string> > >* bags = parseBags(input);

    int count = 0;

    set<string> processed;
    set<string> inProcess;
    set<string> toProcess;

    toProcess.insert("shiny gold");

    while(!toProcess.empty()) {
        inProcess = toProcess;

        toProcess.clear();

        for (string name: inProcess) {
            for (auto const& e : (*bags)) {
                for (tuple<int, string> t: e.second) {
                    string test = std::get<1>(t);

                    if (test == name && processed.find(e.first) == processed.end()) {
                        toProcess.insert(e.first);
                    }
                }
            }

            processed.insert(name);
        }
    }

    // remove the initial shiny gold
    count = processed.size() - 1;

    return count;
}

int containsBags(map<string, vector<tuple<int, string> > >* bags, string name) {
    vector<tuple<int, string> > childs = (*bags)[name];

    int sum = 0;

    for (tuple<int, string> t: (*bags)[name]) {
        int num = std::get<0>(t);

        if (num != 0) {
            int sub = containsBags(bags, std::get<1>(t));

            sum += num + num * sub;    
        }
    }

    return sum;
}

int Day7::process2(vector<string> input) {
    map<string, vector<tuple<int, string> > >* bags = parseBags(input);

    int count = 0;

    count = containsBags(bags, "shiny gold");

    return count;
}
