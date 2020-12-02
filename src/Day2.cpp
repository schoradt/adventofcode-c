
#include "Day2.h"

#include <iostream>

using namespace std;

Day2::Line::Line(string line) {
    size_t index;
    size_t pos;

    index = line.find('-');

    this->first = atoi(line.substr(0, index).c_str());
    pos = index + 1;

    index = line.find(' ', pos);
    this->last = atoi(line.substr(pos, index).c_str());
    pos = index + 1;

    this->c = line.at(pos);

    pos = pos + 3;

    this->content = line.substr(pos);
}

char Day2::Line::getChar() {
    return c;
}

int Day2::Line::getFirst() {
    return first;
}

int Day2::Line::getLast() {
    return last;
}

string Day2::Line::getContent() {
    return content;
}

Day2::Day2() {

}

int Day2::process1(vector<string> input) {
    int ok = 0;

    for(string line: input) {
        Line parsed(line);

        int count = 0;

        for (size_t i = 0; i < parsed.getContent().size(); i++) {
            if (parsed.getChar() == parsed.getContent().at(i)) {
                count++;
            }
        }

        if (parsed.getFirst() <= count && count <= parsed.getLast()) {
            ok++;
        } 
    }

    return ok;
}

int Day2::process2(vector<string> input) {
    int ok = 0;

    for(string line: input) {
        Line parsed(line);

        char c1 = parsed.getContent().at(parsed.getFirst() - 1);
        char c2 = parsed.getContent().at(parsed.getLast() - 1);

        if ((parsed.getChar() == c1 || parsed.getChar() == c2) && c1 != c2) {
            ok++;
        }
    }

    return ok;
}