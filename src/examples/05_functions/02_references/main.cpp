#include <iostream>

using std::cout;

int main()
{
    int num = 10;
    int num1 = 100;

    cout << "Memory Location of num is: " << &num << '\n';

    int& num_ref = num; //stores the address of num into num_ref
    cout << "Memory Location of num via num_ref is: " << &num_ref << '\n';

    cout << "Value of num: " << num << '\n';
    cout << "Value of num via num_ref: " << num_ref << '\n';

    num_ref = 20;
    cout << "Value of num: " << num << '\n';
    cout << "Value of num via num_ref: " << num_ref << '\n';

    num_ref = num1;
    

    return 0;
}