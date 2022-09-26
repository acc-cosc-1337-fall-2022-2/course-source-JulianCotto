#include <string>

using std::string;

//main menu and function calls to if and switch statements
int menu();
void menu_switch_functions(int selx); //calls to functions required in HW

//switch case 1 call to if statement grade calculation
void menuFunSelxCase1(string ltgrade, string indart, int grade);
string get_letter_grade_using_if(int grade);

//switch case 2 call to switch statement grade calculation
void menuFunSelxCase2(string ltgrade, string indart, int grade);
string get_letter_grade_using_switch(int grade);

//user experience functions
void loading_bar();
void outro();




