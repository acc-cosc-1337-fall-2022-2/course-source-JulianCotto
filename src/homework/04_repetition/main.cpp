//write include statements
#include <iostream>
#include "dna.h"

using std::cout, std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content,
or 2 for Get DNA Complement.  The program will prompt user for a
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as
user enters a y or Y.
*/
int main()
{   int selx,
        cont = 0,
        num1,
        num2;
    cout << "Math Operations Menu\n";
    cout << "--------------------";
    do
    {
        cout << "\n1-Factorial\n";
        cout << "2-Greatest Common Divisor\n";
        cout << "3-Exit\n";
        cin >> selx;
        cout << '\n';
        if(selx == 1)
        {
            cout << "Enter a number to calculate its factorial\n";
            cin >> num1;
            cout << '\n';
            cout << factorial(num1);
            cont = 0;
            cout << '\n';
        }
        else if(selx == 2)
        {
            cout << "You will enter 2 numbers to calculate their greatest common divisor\n";
            cout << "Enter first number\n";
            cin >> num1;
            cout << '\n';
            cout << "Enter second number\n";
            cin >> num2;
            cout << '\n';
            cout << gcd(num1, num2) << '\n';
            cont = 0;
            cout << '\n';
        }
        else if(selx == 3)
        {
            cout << "Are you sure you want to exit?\nPress '0' to run another function\nPress '1' to exit\n";
            cin >> cont;
        }
    }
    while(cont == 0);

    cout << "\nGoodbye\n";

	return 0;
}
