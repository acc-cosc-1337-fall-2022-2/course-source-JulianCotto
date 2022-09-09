//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout, std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
    //variable declaration
    double meal_amount,
            tip_amount,
            tax_amount,
              tip_rate,
                 total;

    //prompt user to enter meal amount
    cout << "How much did your meal cost?\n";
    cin >> meal_amount;

    //calculate tax amount based on meal cost
    tax_amount = get_sales_tax_amount(meal_amount);

    //prompt the user to enter tip rate
    cout << "Please enter tip percentage\nYou can enter the whole number or the decimal equivalent\n";
    cin >> tip_rate;

    //method that converts whole numbers to percentages
    tip_rate = convert_to_decimal(tip_rate);

    //calculate tip amount based on meal amount and tip rate
    tip_amount = get_tip_amount(meal_amount, tip_rate);

    //calculate total meal cost based on base meal cost, tax amount and tip amount
    total = meal_amount + tip_amount + tax_amount;

    //method that displays formatted receipt for user with calculated values
    display_receipt(meal_amount, tax_amount, tip_amount, total);

    //end of main method
    return 0;
}
