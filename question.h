#include <iostream>
using namespace std;


class Question
{
    public:
    string contents;
    string a,b,c,d;
    int question_number;
    string correct;
    string user_answer;
    int points;

    void load();
    void ask_question();
    void check_question();

};
