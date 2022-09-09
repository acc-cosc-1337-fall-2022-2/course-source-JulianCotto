#include "hwexpressions.h"
#include <iostream>
#include <iomanip>

using std::cout, std::cin, std::setprecision, std::fixed, std::setw, std::left;

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double get_sales_tax_amount(double meal_amount)
{
    return tax_rate * meal_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
    return meal_amount * tip_rate;
}

double convert_to_decimal(double tip_rate)
{

    if (tip_rate >= 1)
    {
        return (tip_rate / 100);
    }
    else {
        return (tip_rate);
    }
}

void display_receipt(double meal_amount, double tax_amount, double tip_amount, double total)
{
    cout << fixed << setprecision(2);
    cout << "Meal Amount: $" << setw(6) << meal_amount << '\n';
    cout << "Sales Tax  : $" << setw(6) << tax_amount  << '\n';
    cout << "Tip Amount : $" << setw(6) << tip_amount  << '\n';
    cout << "Total      : $" << setw(6) << total       << '\n';
}

