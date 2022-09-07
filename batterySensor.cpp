#include <iostream>
#include <iomanip>
#include "batterySensor.hpp"
#include <assert.h>
using namespace std;

void AbatterySensorData(int sensor1[],int sensor2[]) {
    
    int index, buffer_index = 0;
    for(index = 0; index < NUMBER_OF_SAMPLES; index++) {

        cout << left << "  sensor1 : " << batterysensor1[index]
            << left << "  sensor2 : " << batterysensor2[index]
            << std::endl;

        AbatterysensorOut[buffer_index]
                << left << "sensor1 : " << batterysensor1[index]
                << left << "sensor2 : " << batterysensor2[index]
                << std::endl;

        ++buffer_index;
    }
}

bool TestSensorData(int sensor1[],int sensor2[]) {

    int index, buffer_index = 0;
    for(index = 0; index < NUMBER_OF_SAMPLES; index++) {

        cout << left << "  sensor1 : " << batterysensor1[index]
            << left << "  sensor2 : " << batterysensor2[index]
            << std::endl;

        EbatterysensorOutput[buffer_index]
                << left << "sensor1 : " << batterysensor1[index]
                << left << "sensor2 : " << batterysensor2[index]
                << std::endl;
        
        if(AbatterysensorOut[index].str() != EbatterysensorOutput[index].str()) {
            return false;
            break;
        }

        ++buffer_index;
    }

    return true;
}
