#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "if_else_if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test is overtime")
{
    REQUIRE(is_overtime(40) == false);
    REQUIRE(is_overtime(30) == false);
    REQUIRE(is_overtime(41) == true);
    //REQUIRE(is_overtime(80) == true);
}

TEST_CASE("Verify is even")
{
    REQUIRE(is_even(2) == true);
    REQUIRE(is_even(8) == true);
    REQUIRE(is_even(7) == false);
    REQUIRE(is_even(11) == false);
}

TEST_CASE("Verify get generation")
{
    REQUIRE(get_generation(2010) == "Centennial");
    REQUIRE(get_generation(2000) == "Centennial");
    REQUIRE(get_generation(1990) == "Millennial");
    REQUIRE(get_generation(1980) == "Millennial");
    REQUIRE(get_generation(1970) == "Generation X");
    REQUIRE(get_generation(1960) == "Baby Boomer");
    REQUIRE(get_generation(1950) == "Baby Boomer");
    REQUIRE(get_generation(1940) == "Silent Generation");
    REQUIRE(get_generation(1930) == "Silent Generation");
    REQUIRE(get_generation(1920) == "Invalid Year");
    REQUIRE(get_generation(1910) == "Invalid Year");
    REQUIRE(get_generation(1900) == "Invalid Year");
}

TEST_CASE("Test Switch Statement")
{
    REQUIRE(menu(1) == "Option 1");
    REQUIRE(menu(2) == "Option 2");
    REQUIRE(menu(3) == "Option 3");
    REQUIRE(menu(4) == "Option 4");
    REQUIRE(menu(5) == "Invalid Option");
    REQUIRE(menu(0) == "Invalid Option");
}
