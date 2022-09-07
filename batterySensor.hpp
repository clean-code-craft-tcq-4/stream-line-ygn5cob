#ifndef BATTERYSENSOR_HPP
#define BATTERYSENSOR_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <string>

const int NUMBER_OF_SAMPLES = 50;
std::stringstream AbatterysensorOut[NUMBER_OF_SAMPLES], EbatterysensorOutput[NUMBER_OF_SAMPLES];

const int batterysensor1[50] = {10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59};
const int batterysensor2[50] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300,310,320,330,340,350,360,370,380,390,400,410,420,430,440,450,460,470,480,490,500};

bool TestSensorData(int sensor1[], int sensor2[]);
void AbatterySensorData(int sensor1[],int sensor2[]);
//void EbatterySensorData(int sensor1[], int sensor2[]);

#endif