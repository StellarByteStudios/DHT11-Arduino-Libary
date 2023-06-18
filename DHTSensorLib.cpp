#ifndef DHT_SENSOR_LIB_CPP
#define DHT_SENSOR_LIB_CPP

// Imports
#include "DHTSensorLib.h"



DHTSensorHandler::DHTSensorHandler(int dataPort0)
{
    dataPort = dataPort0;
    temperature = 0.0;
    humid = 0.0;
}

DHTSensorHandler::~DHTSensorHandler(){}

void DHTSensorHandler::updateData(){
    dht11.read2(dataPort, &temperature, &humid, NULL);
}

float DHTSensorHandler::getHumidity(){
    updateData();
    return humid;
}

float DHTSensorHandler::getTemperature(){
    updateData();
    return temperature;
}

#endif