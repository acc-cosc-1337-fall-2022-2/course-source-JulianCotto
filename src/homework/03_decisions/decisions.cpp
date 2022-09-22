#include "decisions.h"
#include <iostream>
#include <chrono>
#include <thread>
//write include statement for decisions header

using
    std::this_thread::sleep_for,
    std::chrono::milliseconds,
    std::fixed,
    std::cout,
    std::cin;


//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string ltGrade;

    if (grade >= 90 and grade <= 100)
    {
        ltGrade = "A";
    }
    else if (grade >= 80 and grade < 90)
    {
        ltGrade = "B";
    }
    else if (grade >= 70 and grade < 80)
    {
        ltGrade = "C";
    }
    else if (grade >= 60 and grade < 70)
    {
        ltGrade = "D";
    }
    else if (grade >= 0 and grade < 60)
    {
        ltGrade = "F";
    }
    else
    {
        ltGrade = "Invalid Entry. Grades are from 0 to 100\n";
    }

return ltGrade;
}

string get_letter_grade_using_switch(int grade)
{
    string ltGrade;

    switch (grade / 10)
    {
        case 10:
        case 9:
            ltGrade = "A";
            break;

        case 8:
            ltGrade = "B";
            break;

        case 7:
            ltGrade = "C";
            break;

        case 6:
            ltGrade = "D";
            break;

        case 0:
            ltGrade = "F";
            break;

        default:
            ltGrade = "Invalid Entry. Grades are from 0 to 100\n";

    }

    return ltGrade;

}

void loading_bar()
{
    cout << "\nCalculating Grade";
    for (int i = 0; i < 3; i++)
    {
        sleep_for(milliseconds(1000) );
        cout << ".";
    }
    cout << "\n\n";
}

int menu()
{
    int selx;

    cout << "       MAIN MENU\n";
    cout << "     -------------\n";
    cout << "(1) Letter Grade Using If\n";
    cout << "(2) Letter Grade Using Switch\n";
    cout << "(3) Exit\n";
    cin >> selx;
    cout << '\n';

    return selx;
}

int menu_switch_functions(int selx)
{
    string  ltgrade,
            indart;
    int     grade;

    switch (selx)
    {


        case 1:
            cout << "Enter your grade (0-100)\n";
            cin >> grade;
            if (grade < 0 || grade > 100)
            {
                grade = -1;
                ltgrade = get_letter_grade_using_if(grade);
            }
            else
            {
                ltgrade = get_letter_grade_using_if(grade);
            }
            loading_bar();
            if (ltgrade == "A" || ltgrade == "F")
            {
                indart = " an ";
                cout << "You got" << indart << ltgrade << "!\n";
            }
            else if (ltgrade == "B" || ltgrade == "C" || ltgrade == "D")
            {
                indart = " a ";
                cout << "You got" << indart << ltgrade << "!\n";
            }
            else
            {
                cout << ltgrade;
                cout << "\nPlease restart the program\n";
            }
            break;

        case 2:
            cout << "Enter your grade (0-100)\n";
            cin >> grade;

            if (grade < 0 || grade > 100)
            {
                grade = 110;
                ltgrade = get_letter_grade_using_switch(grade);
            }
            else
            {
                ltgrade = get_letter_grade_using_switch(grade);
            }
            loading_bar();
            if (ltgrade == "A" || ltgrade == "F")
            {
                indart = " an ";
                cout << "You got" << indart << ltgrade << "!\n";
            }
            else if (ltgrade == "B" || ltgrade == "C" || ltgrade == "D")
            {
                indart = " a ";
                cout << "You got" << indart << ltgrade << "!\n";
            }
            else
            {
                cout << ltgrade;
                cout << "\nPlease restart the program\n";
            }
            break;

        case 3:
            cout << "You have chosen to Exit\n";
            break;

        default:
            cout << "You didn't make a valid selection\n";
            cout << "\nPlease restart the program\n";
    }
}

void outro()
{
    cout << "\nGoodbye!\n";
}