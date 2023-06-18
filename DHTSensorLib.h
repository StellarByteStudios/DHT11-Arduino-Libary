/*
*   English below
*   
*   Libary um den DHT11 Sensor für Arduino zu
*   benutzen und zu verwalten
*   
*   Die Libary ist geschrieben für den
*   DHT11 Temperatur- und Luftfeuchtigkeitssensor
*   
*   Die Libary soll mit c++ Objectorientiert arbeiten,
*   ist jedoch sehr abgespeckt, da nicht viel Funktionalität
*   darin implementiert wurde.
*   
*   Anschlüssen an den Arduino Uno:
*   GRD  -> GRD
*   VCC  -> 5V
*   DataPin -> free decision 
*   
*   
*   
*   libary/wrapper to use the DHT11 temperature and
*   humidity sensor with the Arduino
*   
*   The libary works object-oriented with c++ 
*   so as to wrap the complete handling (which isn´t that much) 
*   of the sensor into a simple object.
*   
*   Conections to the Arduino Uno:
*   GRD  -> GRD
*   VCC  -> 5V
*   DataPin -> free decision 
*   
*/



#ifndef DHT_SENSOR_LIB_H
#define DHT_SENSOR_LIB_H

// Imports
#include <SimpleDHT.h>

class DHTSensorHandler{
    private:
        // * * objectvariables * * //

        // port on which data ist transferred
        int dataPort;
        // saving of data
        float humid;
        float temperature;
        // object form the SimpleDHT.h libary
        SimpleDHT11 dht11;

        // * * private helping-methods * * //
        
        // gather data from the sensor
        void updateData();

    public:
        // * * constructor and destructor * * ////

        // constructor (dataPort)
        DHTSensorHandler(int);

        // destructor
        ~DHTSensorHandler();

        // * * instance-methods * * //

        // returns the humidity in %
        float getHumidity();

        // returns the temperatue in °C
        float getTemperature();
};



#endif