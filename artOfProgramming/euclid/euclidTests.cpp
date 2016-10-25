#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "euclid.hpp"
#include "../../dependencies/Catch/single_include/catch.hpp"


TEST_CASE("Euclid function returns correct GCDs", "[euclid]") {
	REQUIRE(euclid(54, 24) == 6);
	REQUIRE(euclid(18, 42) == 6);
	REQUIRE(euclid(36, 3152) == 4);
}


TEST_CASE("Optimized Euclid function function returns correct GCDs", "[euclid]") {
	REQUIRE(euclidEnhanced(54, 24) == 6);
	REQUIRE(euclidEnhanced(18, 42) == 6);
	REQUIRE(euclidEnhanced(36, 3152) == 4);
}