#ifndef BATTERYSENSOR_HPP
#define BATTERYSENSOR_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <string>
#include <list>
using namespace std;

extern list<string> AbatterysensorOut, EbatterysensorOut;
bool TestSensorData(list<string>& sensor1,list<string>& sensor2);
void batterySensorData(list<string>& sensor1,list<string>& sensor2,list<string>& output);
//void EbatterySensorData(list<string>& sensor1, list<string>& sensor2);

#endif
