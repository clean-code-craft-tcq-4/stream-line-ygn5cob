#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include <iostream>
#include <sstream>
#include <cassert>
#include "batterySensor.hpp"
using namespace std;

TEST_CASE("PASSING TEST CASE 1") {
    CallSender(batterysensor1, batterysensor2);
    REQUIRE(TestSensorData(batterysensor1, batterysensor2) == true);
}