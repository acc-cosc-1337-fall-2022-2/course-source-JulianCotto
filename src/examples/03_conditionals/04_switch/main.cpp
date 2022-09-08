#include "switch.h"
#include<iostream>
using std::cout;
using std::cin;

int main()
{
    auto option = 0;
    cout << "Enter Number\n";
    cin >> option;

    auto result = menu(option);

    cout << "Result: " << result << '\n';

    return 0;
}