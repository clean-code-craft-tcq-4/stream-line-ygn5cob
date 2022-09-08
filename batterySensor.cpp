#include <iostream>
#include <iomanip>
#include "batterySensor.hpp"
#include <assert.h>
using namespace std;
list<string> AbatterysensorOut, EbatterysensorOut;

bool TestSensorData(list<string>& sensor1,list<string>& sensor2) {
      
    batterySensorData(sensor1, sensor2,EbatterysensorOut);
    list<string>::iterator itr = AbatterysensorOut.begin();
    list<string>::iterator it2 = EbatterysensorOut.begin()
      
for(;itr!=AbatterysensorOut.end(),it2!=EbatterysensorOut.end(); ++itr,++it2)
 {
     if(*itr != *it2)   // is this correct 
     {
         return false;
         break;
     }
  }
    return true;
}

void batterySensorData(list<string>& sensor1,list<string>& sensor2,list<string>& output){
   
    int index, buffer_index = 0;
     cout<<"sensor ouput List:"<<"\n";
    list<string>::iterator itr = sensor1.begin();
    list<string>::iterator it2 = sensor2.begin()
      
    for(;itr!=sensor1.end(),it2!=sensor2.end(); ++itr,++it2)
    {
            string sensor_output = *itr + ":" + *it2;
            output.push_back(sensor_output); 
            cout<<sensor_output<<"\n";
    }
}
