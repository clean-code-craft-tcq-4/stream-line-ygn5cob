#include <iostream>
#include <iomanip>
#include "batterySensor.hpp"
#include <assert.h>
using namespace std;

const int NUMBER_OF_SAMPLES = 50;
std::stringstream AbatterysensorOut[NUMBER_OF_SAMPLES], EbatterysensorOut[NUMBER_OF_SAMPLES];

void EbatterySensorData(int sensor1[],int sensor2[]) {
    
    int index, buffer_index = 0;
    for(index = 0; index < NUMBER_OF_SAMPLES; index++) {
    
        cout << left << "  sensor1 : " << batterysensor1[index]
            << left << "  sensor2 : " << batterysensor2[index]
            << std::endl;

        EbatterysensorOut[buffer_index] 
            << left << "sensor1 : " << batterysensor1[index] 
            << left << "sensor2 : " << batterysensor2[index] 
            << std::endl;

    ++buffer_index;
    }
}

void AbatterySensorData(int sensor1[],int sensor2[]) {
    
    int index, buffer_index = 0;
    for(index = 0; index < NUMBER_OF_SAMPLES; index++) {
    
        cout << left << "  sensor1 : " << batterysensor1[index]
            << left << "  sensor2 : " << batterysensor2[index]
            << std::endl;

        AbatterysensorOut[buffer_index]
            << left << "sensor1 : " << batterysensor1[index]
            << left << "sensor1 : " << batterysensor2[index]
            << std::endl;

    ++buffer_index;
    }
}

bool TestSensorData(int sensor1[],int sensor2[]) {
   
    EbatterySensorData(sensor1, sensor2);
    for(int  index= 0; index < NUMBER_OF_SAMPLES; index++){
        if(AbatterysensorOut[index].str() != EbatterysensorOut[index].str()) {
            return false;
            break;
        }
    }
    return true;
}
