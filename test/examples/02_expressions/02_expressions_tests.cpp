#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "casting.h"
#include "constants.h"
#include "data_type_size.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test operator precedence without parenthesis")
{
    REQUIRE(operator_precedence_1(2, 6, 3) == 4);
}

TEST_CASE("Test operator precedence with parenthesis")
{
    REQUIRE(operator_precedence_2(2, 5, 2) == 5);
}

TEST_CASE("Test operator precedence w multiplication without parenthesis")
{
    REQUIRE(operator_precedence_3(8, 4, 2) == 64);
}

TEST_CASE("Test operator precedence w multiplication with parenthesis")
{
    REQUIRE(operator_precedence_4(8, 4, 2) == 24);
}

TEST_CASE("Test Convert to double 1 - will fail")
{
    REQUIRE(convert_to_double(10, 5.595) == 55.95);
}

TEST_CASE("Test Convert to double 2")
{
    REQUIRE(convert_to_double(10, 5.5) == 55.0);
}

TEST_CASE("Test convert double to int")
{
    REQUIRE(convert_double_to_int(10.5) == 10);
}

TEST_CASE("Test Static Cast")
{
    REQUIRE(static_cast_double_int(10.5) == 10);
}

TEST_CASE("Test Get Area Of Circle")
{
    REQUIRE(get_area_of_circle(10) == 314.159);
}

TEST_CASE("Test int data size")
{
    REQUIRE(int_data_size(10) == 4);
}
