#include "overflow.h"
#include <iostream>
#include <climits>

using std::cout;

int main()
{

    auto max = 2147483647; // largest int we can store in int datatype
    cout << "Max int is: " << max << "\n";

    max = max + 1;
    cout << "Max + 1 (to demonstrate overflow) is: " << max << "\n"; // negative values indicate as issue has occurred (overflow)

    auto closest_to_zero_double = __DBL_MIN__;

    auto too_close_to_zero_double = closest_to_zero_double / 10;
    cout << "Output of a value to close to zero is: " << too_close_to_zero_double;

    return 0;
}