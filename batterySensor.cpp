#include <iostream>
#include <iomanip>
#include "batterySensor.hpp"
#include <assert.h>
using namespace std;
list<string> AbatterysensorOut, EbatterysensorOut;

bool TestSensorData(list<string>& sensor1,list<string>& sensor2) {
      
    batterySensorData(sensor1, sensor2,EbatterysensorOut);
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

void batterySensorData(list<string>& sensor1,list<string>& sensor2,list<string>& output){
   
    int index, buffer_index = 0;
    for(list<string>::iterator itr=sensor1.begin();itr!=sensor1.end(); ++itr)
    {
        for(list<string>::iterator it2 = sensor2.begin(); it2!=sensor2.end(); ++it2)
        {
            string sensor_output = *itr + ":" + *it2;
            output.push_back(sensor_output);
        }
    }
}
