#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

#include "catch.hpp"
#include "question2.h"

TEST_CASE("Test is_palindrome function")
{
    REQUIRE(is_palindrome("abcba") == true);
    REQUIRE(is_palindrome("abc") == false);
    REQUIRE(is_palindrome("hannah") == true);
    REQUIRE(is_palindrome("hanna") == false);
}
