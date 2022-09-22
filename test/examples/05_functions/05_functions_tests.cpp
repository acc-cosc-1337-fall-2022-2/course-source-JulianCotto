#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "void.h"
#include "reference.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test echo variable")
{
    int num = 10;
    int result = echo_variable(num);

    REQUIRE(num == 10);
    REQUIRE(result == 20);
}
TEST_CASE("Test function reference")
{
    int num = 10;
    ref_param(num);

    REQUIRE(num == 20);
}

TEST_CASE("Test default parameters")
{
    REQUIRE(get_total(10, .08) == .8);
}

