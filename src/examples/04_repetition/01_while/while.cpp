#include "while.h"


using std::cout;

bool order_of_precedence()
{
    return !(true && false) || false;
}

bool is_number_in_range(int num)
{
    return num >= 1 && num <= 10;
}

bool is_letter_a_consonant(char letter)
{
    return letter == 'a' || letter == 'b' || letter == 'c' || letter == 'd' || letter == 'e';
}
//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30
int sum_of_squares(int num)
{
    int   sum = 0;

    while(num > 0)
    {
    sum = sum + num * num;
    num--;
    }

    return sum;
}

//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

H
e
l
l
0

*/

void display(string str)
{
    int i = 0;

    while(i < str.size())
    {
        cout << (str[i]) <<'\n';
        i++;
    }

}