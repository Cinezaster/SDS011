// Example usage for SDS011 library by toon nelissen.

#include <SDS011.h>

float p10,p25;
int error;

// Initialize objects from the lib
SDS011 dustSensor;

void setup() {
    dustSensor.begin();
    Serial.begin(9600);
}

void loop() {
    error = dustSensor.read(&p25,&p10);
	if (! error) {
		Serial.println("P2.5: "+String(p25));
		Serial.println("P10:  "+String(p10));
	}
	delay(1000);
	dustSensor.sleep();
	delay(5000);
	dustSensor.wakeup();
	delay(10000); // wait a bit to get a better reading
}
