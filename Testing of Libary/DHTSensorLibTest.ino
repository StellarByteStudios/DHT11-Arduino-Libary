/*
*   Test Skript um die DHT11 Libary zu testen
*   
*   Die Libary soll mit c++ Objectorientiert arbeiten.
*    
*/

// Imports
#include "DHTSensorLib.h"

// variables
int dataPort = 7;
DHTSensorHandler* dht;


void setup() {
	// set-up serial port
	Serial.begin(9800);

	// create sensorobject
	dht = new DHTSensorHandler(dataPort);

	Serial.println(F("============= testing of DHT11 Libary ============="));

}

void loop() {
	// get data
	float humidity = dht->getHumidity();
	float temperature = dht->getTemperature();

	// concatenate string
	String dataString = "data of sensors: humid: ";

	dataString += humidity;
	dataString += ";\t temperature";
	dataString += temperature;

	Serial.println(dataString);

    delay(250);
}
