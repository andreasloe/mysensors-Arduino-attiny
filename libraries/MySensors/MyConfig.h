#ifndef MyConfig_h
#define MyConfig_h

/***
 * Configure Sensor Network
 */
#define RF24_CHANNEL	   76             //RF channel for the sensor net, 0-127
#define RF24_DATARATE 	   RF24_250KBPS   //RF24_250KBPS for 250kbs, RF24_1MBPS for 1Mbps, or RF24_2MBPS for 2Mbps
#define RF24_PA_LEVEL 	   RF24_PA_MAX    //Sensor PA Level == RF24_PA_MIN=-18dBm, RF24_PA_LOW=-12dBm, RF24_PA_HIGH=-6dBM, and RF24_PA_MAX=0dBm
#define RF24_PA_LEVEL_GW   RF24_PA_LOW  //Gateway PA Level, defaults to Sensor net PA Level.  Tune here if using an amplified nRF2401+ in your gateway.
#define BASE_RADIO_ID 	   ((uint64_t)0xA8A8E1FC00LL) // This is also act as base value for sensor nodeId addresses. Change this (or channel) if you have more than one sensor network.

// MySensors online examples defaults
#define DEFAULT_CE_PIN 9
#define DEFAULT_CS_PIN 10

/***
 * Enable/Disable debug logging
 */
#define DEBUG

/***
 * attiny support
 */

#if defined (ARDUINO) && !defined (__arm__)
	#if defined(__AVR_ATtiny25__) || defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__) || defined(__AVR_ATtiny24__) || defined(__AVR_ATtiny44__) || defined(__AVR_ATtiny84__)
		#define TINY
		#define NO_SERIAL
		#define NO_REPEATER
		#define NO_AUTO
		#undef DEBUG
		#define TINY_DEBUG
		#define DEFAULT_CE_PIN 5
		#define DEFAULT_CS_PIN 3
	#endif
#endif


#endif
