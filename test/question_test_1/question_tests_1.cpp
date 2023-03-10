#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
#include "question1.h"
#include "catch.hpp"

TEST_CASE("Test transcribe_dna_into_rna function", "[transcribe_dna_into_rna]") {
    REQUIRE(transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT") == "GAUGGAACUUGACUACGUAAAUU");
}
