#include "decisions.h"
#include <iostream>
#include <chrono>
#include <thread>

using
    std::this_thread::sleep_for, //for loading_bar()
    std::chrono::milliseconds, //for loading_bar
    std::cout,
    std::cin;

int menu()
{
    int selx; //(selx) selection variable initialized

    cout << "       MAIN MENU\n";
    cout << "     -------------\n";
    cout << "(1) Letter Grade Using If\n";
    cout << "(2) Letter Grade Using Switch\n";
    cout << "(3) Exit\n";
    cin >> selx; //selx variable initialized by user
    cout << '\n';

    return selx; //user selx returned
}

void menu_switch_functions(int selx) //takes user selx variable as param
{
    string  ltgrade, //lettergrade
            indart; //indefinitearticle
    int grade = 0; //grade

    switch (selx)
    {
        case 1:
            menuFunSelxCase1(ltgrade, indart, grade); //call to functon that sets up if statement
            break;

        case 2:
            menuFunSelxCase2(ltgrade, indart, grade); //call to functon that sets up switch statement
            break;

        case 3:
            cout << "You have chosen to Exit\n";
            break;

        default:
            cout << "You didn't make a valid selection\n";
            cout << "\nPlease restart the program\n";
    }
}

void menuFunSelxCase1(string ltgrade, string indart, int grade)
{
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
}

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

void menuFunSelxCase2(string ltgrade, string indart, int grade)
{
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
        case 5:
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
    cout << "Calculating Grade:";
    for (int i = 0; i < 3; i++)
    {
        sleep_for(milliseconds(1000) );
        cout << ".";
    }
    cout << "\n\n";
}

void outro()
{
    cout << "\nGoodbye!\n";
}
