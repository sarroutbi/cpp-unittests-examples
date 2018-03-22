#include "../src/Calculator.hpp"

#define BOOST_TEST_MODULE const_string CalcTest
#define BOOST_TEST_SHOW_PROGRESS yes
#include "boost/test/included/unit_test.hpp"

BOOST_AUTO_TEST_CASE( GivenCalculator_WhenAdd0_0_ThenResultIs_0 )
{
  Calculator calc;
  BOOST_CHECK_EQUAL(0, calc.Add(0,0));
}
