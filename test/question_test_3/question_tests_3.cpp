#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
#include "question3.h"
#include "catch.hpp"

TEST_CASE("find_gcd returns the correct gcd") {
    REQUIRE(find_gcd(15, 25) == 5);
    REQUIRE(find_gcd(16, 32) == 16);
    REQUIRE(find_gcd(159, 309) == -1); // out of range numbers
}

TEST_CASE("find_gcd returns -1 for out of range numbers") {
    REQUIRE(find_gcd(0, 10) == -1); // first number out of range
    REQUIRE(find_gcd(10, 0) == -1); // second number out of range
    REQUIRE(find_gcd(201, 10) == -1); // first number out of range
    REQUIRE(find_gcd(10, 201) == -1); // second number out of range
}
