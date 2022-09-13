#include "hwexpressions.h"
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>


using std::cout, std::cin, std::setprecision, std::fixed, std::setw;

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
    cout << "Meal Amount: $" << setw(5) << meal_amount << '\n';
    cout << "Sales Tax  : $" << setw(5) << tax_amount  << '\n';
    cout << "Tip Amount : $" << setw(5) << tip_amount  << '\n';
    cout << "Total      : $" << setw(5) << total       << '\n';
}

void loading_bar()
{
    cout << "\nPrinting Receipt";
    for (int i = 0; i < 3; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000) );
        cout << ".";
    }
    cout << "\n\n";
}

