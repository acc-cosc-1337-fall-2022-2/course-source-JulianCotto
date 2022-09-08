//write include statements
#include "if_else_if.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main()
{
    std::string generation;
    int year;

    cout << "Enter your birth year.\n";
    cin >> year;

    generation = get_generation(year);
    cout << "You are a part of the " << generation << " generation\n";

    return 0;
}