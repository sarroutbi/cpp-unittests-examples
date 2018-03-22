// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/Calculator.hpp"

TEST_CASE( "Adding 0 + 0 returns 0" ) {
  Calculator calc;
  REQUIRE(calc.Add(0, 0) == 0);
}

TEST_CASE( "Adding 0 + 1 returns 0" ) {
  Calculator calc;
  REQUIRE(calc.Add(0, -1) == -1);
}

TEST_CASE( "Divide by 0 returns exception" ) {
  Calculator calc;
  REQUIRE_THROWS_WITH(calc.Divide(1, 0), Catch::Matchers::Contains("received 0 in divisor"));
}
