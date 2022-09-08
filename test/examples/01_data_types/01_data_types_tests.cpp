#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h" // help C++ find our code
#include "decimals.h"
#include "char.h"



TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

/*test case echo_variable */

TEST_CASE("Test Echo Variable Function")
{
    REQUIRE(echo_variable(5) == 5);
    REQUIRE(echo_variable(6) == 6);
}

/*test case add_to_double_1 with 0 as parameter*/

/*TEST_CASE("Test function add to double 1 w 0 as parameter")
{
    REQUIRE(add_to_double_1(0) == .9);
}*/

/*test case add_to_double_1 with 1 as parameter*/

TEST_CASE("Test function add to double 1 w 1 as parameter")
{
    REQUIRE(add_to_double_1(1) == 1.9);
}

/*test case add_to_double_2 with 0 as parameter*/
TEST_CASE("Test function add to double 2 w 0 as parameter")
{
    REQUIRE(add_to_double_2(0) == 1.5);
}
/*test case add_to_double_2 with 1 as parameter*/

TEST_CASE("Test function add to double 2 w 1 as parameter")
{
    REQUIRE(add_to_double_2(1) == 2.5);
}

/*test case char test ASCII values */

TEST_CASE("Test char test ascii values")
{
    REQUIRE(get_char_ascii_value('A') == 65);
    REQUIRE(get_char_ascii_value('B') == 66);
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

TEST_CASE("Test string test ASCII w Joe as parameter")
{
    REQUIRE(get_char_ascii_value('J') == 74);
    REQUIRE(get_char_ascii_value('o') == 111);
    REQUIRE(get_char_ascii_value('e') == 101);

}
