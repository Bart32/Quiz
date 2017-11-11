#include <iostream>
#include "question.h"
using namespace std;
int main()
{
    int exit;
    int actuall_number=1;
    Question p[5];
    int sum=0;
    for(int i=0; i<=4; i++)
    {
        p[i].question_number=i+1;
        p[i].load();
        p[i].ask_question();
        p[i].check_question();
        sum+=p[i].
        points;
    }


    cout << "Quiz is over ! POINTS =" <<sum;
    cin >> exit;
    return 0;
}
