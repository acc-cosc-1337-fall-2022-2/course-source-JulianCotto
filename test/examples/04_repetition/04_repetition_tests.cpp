#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test order of precedence")
{
    REQUIRE(order_of_precedence() == true);
}

TEST_CASE("Test is number in range")
{
    REQUIRE(is_number_in_range(0) == false);
    REQUIRE(is_number_in_range(11) == false);
    REQUIRE(is_number_in_range(1) == true);
    REQUIRE(is_number_in_range(5) == true);
    REQUIRE(is_number_in_range(10) == true);
}

TEST_CASE("Tes is letter a consonant")
{
    REQUIRE(is_letter_a_consonant('a') == false);
    REQUIRE(is_letter_a_consonant('b') == true);
    REQUIRE(is_letter_a_consonant('g') == true);
    REQUIRE(is_letter_a_consonant('i') == false);
    REQUIRE(is_letter_a_consonant('z') == true);
}

TEST_CASE("Testing sum of squares")
{
    REQUIRE(sum_of_squares(4) == 30);
    REQUIRE(sum_of_squares(3) == 14);
    REQUIRE(sum_of_squares(5) == 55);
}