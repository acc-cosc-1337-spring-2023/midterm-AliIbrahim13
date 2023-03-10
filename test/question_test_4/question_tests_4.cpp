#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question4.h"

TEST_CASE("get_dna_p_distance returns correct p-distance") {
    SECTION("strings differ in 7 out of 17 characters") {
        double expected = 0.4118;
        double actual = get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");
        REQUIRE(expected == Approx(actual).epsilon(0.0001));
    }

    SECTION("strings differ in 6 out of 17 characters") {
        double expected = 0.3529;
        double actual = get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT");
        actual = std::round(actual * 10000) / 10000.0; // round actual value to four decimal places
        REQUIRE(expected == Approx(actual).epsilon(0.0001));
    }

    SECTION("strings differ in all characters") {
        double expected = 1.0;
        double actual = get_dna_p_distance("AAAAAAAAAAAAAAAAA", "TTTTTTTTTTTTTTTTT");
        REQUIRE(expected == Approx(actual).epsilon(0.0001));
    }

    SECTION("strings are identical") {
        double expected = 0.0;
        double actual = get_dna_p_distance("GAGCCTACTAACGGGAT", "GAGCCTACTAACGGGAT");
        REQUIRE(expected == Approx(actual).epsilon(0.0001));
    }

    SECTION("one string is empty") {
        double expected = 1.0;
        double actual = get_dna_p_distance("GAGCCTACTAACGGGAT", "");
        REQUIRE(expected == Approx(actual).epsilon(0.0001));
    }
}
