
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

string cleanupName(string name) {
    if (name.find("bags") != string::npos) {
        return name.substr(0, name.size() - 5);
    } else if (name.find("bag") != string::npos) {
        return name.substr(0, name.size() - 4);
    }

    return name;
}

int Day7::process1(vector<string> input) {
    map<string, vector<tuple<int, string> > > bags;


    for (string line: input) {
        size_t index = line.find("contain");

        if (index == string::npos) continue;

        string name = cleanupName(line.substr(0, index - 1));
        string tail = line.substr(index + 8, line.size() - index - 8 - 1);

        vector<string> elems = splitLine(tail, ", ");

        vector<tuple<int, string> > childs;

        if ( bags.find(name) == bags.end() ) {
            bags[name] = childs;
        }

        for (string elem: elems) {
            int index = elem.find_first_of(" ");

            int num = atoi(elem.substr(0, index).c_str());
            string eName = cleanupName(elem.substr(index + 1));

            bags[name].push_back(std::make_tuple(num, eName));
        }
    }

    int count = 0;

    vector<string> names;

    names.push_back("shiny gold");

    set<string> containers;
    containers.insert("shiny gold");
    size_t old = 0;

    while(old != containers.size()) {
        old = containers.size();

        for (string name: containers) {
            //cout << "- " << old << " " << name << " => ";

            for (auto const& e : bags) {
                for (tuple<int, string> t: e.second) {
                    string test = std::get<1>(t);

                    if (test == name) {
                        containers.insert(e.first);

                        //cout << e.first << "* ";
                    }
                }
            }

            //cout << endl;
        }
    }

    count = containers.size() - 1;

    return count;
}

int Day7::process2(vector<string> input) {
    
    return -1;
}
