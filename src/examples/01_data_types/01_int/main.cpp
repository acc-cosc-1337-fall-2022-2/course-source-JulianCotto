# include "int.h"
#include <iostream>

using std::cout;

int main() //main function
{
    int num; //declare variable but dont assign value to it
    num = echo_variable(5); //call echo_variable function

    cout << "Echo Value: " << num << "\n" ;

    return 0;
} //end of main function