#include "data_types.h"
#include <iostream>

//write include statements

using std::cout, std::cin;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
    int num, //Variable declaration
    num1 = 4, //Variable declaration/Instantiation
    result; //Variable declaration

    //Program description for user
    cout << "This program utilizes the int returning multiply_numbers(int num) function.\n"
            "You will enter a number to multiply by 5 in the function.\n\n";

    //Program direction and variable instantiation
    cout << "Enter a number\n";
    cin >> num;

    //Function call with user instantiated variable num as parameter
    result = multiply_numbers(num); //Result of function call used as instantiation value for variable "result"
    cout << num << " x 5 = " << result << "\n\n"; //Display variable "result" to screen with clarifying information

    //Program description for 2nd call of multiply_numbers() function
    cout << "The function will now take the parameter 4 to multiply it by 5 in the function.\n\n";

    //Variable "result" reassigned to value int 4
    result = multiply_numbers(num1);
    cout << num1 << " x 5 = " << result << "\n\n"; //Display variable "result" to screen with clarifying information

    //Program outro/end
    cout << "Thank you for running this program\n" << "Goodbye\n";

    return 0; //Main function return value
}
