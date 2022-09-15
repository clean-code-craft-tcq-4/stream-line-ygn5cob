#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include <iostream>
#include <sstream>
#include <cassert>
#include "batterySensor.hpp"
using namespace std;

TEST_CASE("COMPARE SENSOR OUTPUT") {
    list<string> lines_1;
    list<string> lines_2;
    string sensor1_output = "sensor1_output.txt";
    string sensor2_output = "sensor2_output.txt";
    string s;
    ifstream inOne(sensor1_output);
    ifstream inTwo(sensor2_output); 

    while (getline(inOne, s))
        lines_1.push_back(s);
    
    while (getline(inTwo, s))
        lines_2.push_back(s);
    
    //cout<<"\n Testing sensor output before sending \n";  
    batterySensorData(lines_1, lines_2,AbatterysensorOut);
    
    REQUIRE(TestSensorData(lines_1, lines_2) == true);
}
