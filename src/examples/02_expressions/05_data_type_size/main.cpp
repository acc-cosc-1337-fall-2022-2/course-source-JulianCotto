#include <iostream>

using std::cout, std::cin;

int main()
{
    auto num = 10;

    cout << "Size of int variable 'num' in memory\nInteger value: " << num << "\n";
    cout << "Memory value : " << sizeof(num);

    return 0;
}