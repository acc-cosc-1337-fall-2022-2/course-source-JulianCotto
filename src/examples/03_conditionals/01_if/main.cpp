#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main()
{
    //create a bool variable named even
    //create an int variable named value
    auto overtime = false;
    auto hours = 0.1;

    //prompt user for a keyboard number
    //assign the number to the value variable
    cout << "Enter Hours\n";
    cin >> hours;

    //call the is_even function with value as its argument
    //and assign its return value to the even variable
    overtime = is_overtime(hours);
    if (overtime)
    {
        cout << "Hours: " << hours << " qualifies for overtime.\n";
    }
    else
    {
        cout << "Hours: " << hours << " does not qualify for overtime.\n";
    }

    //display even if number is even


    return 0;
}
