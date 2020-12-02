
#include "Base.h"

class Day2: public Base
{
private:
    class Line {
        private:
            int first;
            int last;
            char c;

            string content;
        public:
            Line(string line);

            int getFirst();
            int getLast();
            char getChar();

            string getContent();
    };

public:
    Day2(/* args */);

    int process1(vector<string> input);

    int process2(vector<string> input);
};
