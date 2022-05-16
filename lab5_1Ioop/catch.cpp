#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Money.cpp"
#include "Money.hpp"
#include "Object.hpp"
#include "Object.cpp"

TEST_CASE( "Arguments initialized") {
    Money test(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    REQUIRE( test.GetAm500() == 2);
}
