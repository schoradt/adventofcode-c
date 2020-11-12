

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Base {
public:
    vector<string> loadLines(string filename) {
        vector<string> result;

        ifstream input(filename);
        
        if (!input) {
            cerr << "Fail to load file " << filename << endl;
        }

        string line;

        while(getline(input, line)) {
            result.push_back(line);
        }

        return result;
    }

    vector<string> loadLinesString(string lines) {
        vector<string> result;

        stringstream input(lines);
        
        string line;

        while(getline(input, line)) {
            result.push_back(line);
        }

        return result;
    }

    vector<int> parseIntergerLines(vector<string> strings) {
        vector<int> result;

        for(const auto& value: strings) {
            result.push_back(stoi(value));
        }

        return result;
    }

    vector<string> splitLine(string line, string delim = ",") {
        vector<string> result;

        auto start = 0U;
        auto end = line.find(delim);

        while (end != std::string::npos) {
            result.push_back(line.substr(start, end - start));

        
            start = end + delim.length();
            end = line.find(delim, start);
        }

        result.push_back(line.substr(start, end));

        return result;
    }
};