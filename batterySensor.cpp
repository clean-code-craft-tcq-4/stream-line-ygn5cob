#include <iostream>
#include <iomanip>
#include "batterySensor.hpp"
#include <assert.h>
using namespace std;

list<string> AbatterysensorOut, EbatterysensorOut;

void EbatterySensorData(list<string>& sensor1,list<string>& sensor2) {
   
    int index, buffer_index = 0;
    for(list<string>::iterator itr=sensor1.begin();itr!=sensor1.end(); ++itr)
    {
        for(list<string>::iterator it2 = sensor2.begin(); it2!=sensor2.end(); ++it2)
        {
            string sensor_output = *itr + ":" + *it2;
            EbatterysensorOut.push_back(sensor_output);
        }
    }
}

void AbatterySensorData(list<string>& sensor1,list<string>& sensor2) {
       
    int index, buffer_index = 0;
    for(list<string>::iterator itr=sensor1.begin();itr!=sensor1.end(); ++itr)
    {
        for(list<string>::iterator it2 = sensor2.begin(); it2!=sensor2.end(); ++it2)
        {
            string sensor_output = *itr + ":" + *it2;
            AbatterysensorOut.push_back(sensor_output);
        }
    }
}

bool TestSensorData(list<string>& sensor1,list<string>& sensor2) {
   
    EbatterySensorData(sensor1, sensor2);
for(list<string>::iterator itr=AbatterysensorOut.begin();itr!=AbatterysensorOut.end(); ++itr)
 {
   for(list<string>::iterator it2 = EbatterysensorOut.begin(); it2!=EbatterysensorOut.end(); ++it2)
        {
                if(*itr != *it2)   // is this correct 
                {
                    return false;
                    break;
                }
        }
 }
    return true;
}
