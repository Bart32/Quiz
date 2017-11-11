#include <iostream>
#include "question.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Question::load()
{
    fstream file;
    file.open("quiz.txt", ios::in);

    if(file.good()==false)
    {
        cout << "You can't open file";
        exit(0);
    }
    int line_number=(question_number-1)*6+1;
    int actuall_number=1;
    string line;
    while(getline(file, line))
        {
            if(actuall_number==line_number)   contents=line;
            if(actuall_number==line_number+1) a=line;
            if(actuall_number==line_number+2) b=line;
            if(actuall_number==line_number+3) c=line;
            if(actuall_number==line_number+4) d=line;
            if(actuall_number==line_number+5 ) correct=line;
            actuall_number++;
        }
        file.close();
}
void Question::ask_question()
{
    cout << endl << contents << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << endl << "Answer: ";
    cin >> user_answer;
}
void Question::check_question()
{
    if(user_answer==correct)
    {
        points=1;
    }
    else
    {
        points=0;
    }
}

