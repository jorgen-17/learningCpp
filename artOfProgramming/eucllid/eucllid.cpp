#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

//returns the greatest common divisor between two integers m and n
int euclid(unsigned int m, unsigned int n)
{
	int r = m % n;
	return r ? euclid(n, r) : n;
}

TEST_CASE("Euclid function returns correct GCDs", "[euclid]") {
	REQUIRE(euclid(54, 24) == 6);
	REQUIRE(euclid(18, 42) == 6);
	REQUIRE(euclid(36, 3152) == 4);
}
