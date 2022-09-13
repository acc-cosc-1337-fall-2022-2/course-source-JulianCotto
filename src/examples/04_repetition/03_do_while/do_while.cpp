#include <iostream>
#include "do_while.h"

using std::cout, std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  

void prompt_user()
{
    auto choice = 'y';

    do
    {
        cout << "Continue?";
        cin >> choice;
    }
    while(choice == 'y' || choice == 'Y');
}

void runMenu()
{
    auto menuOption = 0;

    do
    {
        cout << "\n1-AP\n";
        cout << "2-AR\n";
        cout << "3-Py\n";
        cout << "4-Exit\n";

        cout << "\nEnter Option: \n";
        cin >> menuOption;
    }
    while(menuOption != 4);
}
