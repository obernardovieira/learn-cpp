#include <iostream>
#include <limits>
#include "../json/json.hpp"
#include "train.h"
#include "load.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using nlohmann::json;

void menu_train()
{
    int answer = 0;
    int total_lessons;
    json json_data;
    string fake;
    while(answer == 0)
    {
        cout << "The train consists in gave you lessons to understand the rules.\n" <<
             "After some lessons you can do an exam.\n" <<
             "Now you can go ahead (1) or go back (2)." <<
             "Your answer:" << endl;
        cin >> answer;
        if(answer != 1 && answer != 2) answer = 0;
    }
    if(answer == 2)
    {
        return;
    }

    cout << "Welcome. Each lesson is presented with some text, read it.\n" <<
         "After each lesson press enter to continue." << endl;

    cin.get();
    cin.get();

    json_data = load();

    cout << ">> First, we start with rules <<" << endl << endl;
    total_lessons = json_data.at("lessons").at("rules").size();
    for(int i = 0; i < total_lessons; i++)
    {
        cout << json_data.at("lessons").at("rules").at(i).get<std::string>();
        cin.get();
    }
    cout << ">> Now, max speeds <<" << endl << endl;
    total_lessons = json_data.at("lessons").at("max-speeds").size();
    for(int i = 0; i < total_lessons; i++)
    {
        cout << json_data.at("lessons").at("max-speeds").at(i).get<std::string>();
        cin.get();
    }
    cout << ">> And to finalize, signs <<" << endl << endl;
    total_lessons = json_data.at("lessons").at("signals").size();
    for(int i = 0; i < total_lessons; i++)
    {
        cout << json_data.at("lessons").at("signals").at(i).get<std::string>();
        cin.get();
    }
    cout << "Lessons finished! Go back, study and do an exam." << endl;
    cin.get();
}