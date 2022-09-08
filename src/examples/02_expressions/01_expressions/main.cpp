#include "expressions.h"
#include <iostream>

using std::cout;

int main()
{
    auto result = operator_precedence_1(2, 6, 2);

    cout << "Result 1: " << result << "\n";

    result = operator_precedence_2(4, 6, 2);
    cout << "Result 2: " << result << "\n";

    return 0;
}