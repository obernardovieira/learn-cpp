#include <iostream>
#include "train/train.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

const static string school_name = "Driver School";

int welcome()
{
    int answer = 0;
    while(answer == 0)
    {
        cout << "Welcome to " << school_name << ".\n" <<
             "What do you want to do ?\n1 - Train\n2 - Go Exam\n3 - Go Driving\n4 - Exit\nYour answer:" << endl;

        cin >> answer;
        if(answer < 1 || answer > 4) answer = 0;
    }
    return answer;
}

int main()
{
    int answer = 0;
    while(answer != 4)
    {
        answer = welcome();

        switch (answer)
        {
            case 1:
                menu_train();
                break;
            case 2:
                break;
            case 3:
                break;
        }
    }
    return 0;
}