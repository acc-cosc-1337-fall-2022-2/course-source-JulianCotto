#include<iostream> /* <--- start of a multi-line comment
// ^--- pre-processor instructions | include input (cin) & output (cout) stream
^--- start of a single-line comment
end of a multi-line comment ---> */

using std::cout;
// ^--- from the standard library > use cout (input)
// ^--- better practice than "using namespace std;"
// ^--- could lead to conflicting name issues with larger programs

int main()
// ^--- every C++ program MUST-HAVE a value returning main() function

{                                    /*
^--- indicates the start of a function
*/

    cout << "Hello World!\n";
    // ^--- console out (print) "Hello World!"

    return 0;
    // ^--- value returned from main() function


}                                  /*
^--- indicates the end of a function
*/