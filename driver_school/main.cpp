#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

const string school_name = "Driver School";

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

void train()
{
    int answer = 0;
    while(answer == 0)
    {
        cout << "The train consists in gave you lessons to understand the rules.\n" <<
             "After some lessons you can do an exam.\n" <<
             "KNow you can go ahead (1) or go back (2)." <<
             "Your answer:" << endl;
        cin >> answer;
        if(answer != 1 && answer != 2) answer = 0;
    }
    if(answer == 2)
    {
        return;
    }
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
                train();
                break;
            case 2:
                break;
            case 3:
                break;
        }
    }
    return 0;
}