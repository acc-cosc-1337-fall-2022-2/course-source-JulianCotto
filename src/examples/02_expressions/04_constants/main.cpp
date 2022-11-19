#include "constants.h"
#include <iostream>

using std::cout, std::cin;

int main()
{
    auto radius = 0;
    cout<<"Enter the circles radius"<<"\n";
    cin >> radius;

    cout << "The area of the circle is: "<<get_area_of_circle(radius);

    return 0;
}