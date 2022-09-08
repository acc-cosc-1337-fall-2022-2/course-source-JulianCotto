#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function")
{
    //Tests have been run and successfully verified
    REQUIRE(add_numbers(5, 5) == 10);
    REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Test Multiply Numbers")
{
    //Tests have been run and successfully verified
    REQUIRE(multiply_numbers(10) == 50);
    REQUIRE(multiply_numbers(2) == 10);
    REQUIRE(multiply_numbers(4) == 20); //Test case to verify main function output
}

