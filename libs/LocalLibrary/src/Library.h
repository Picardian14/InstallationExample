#ifndef __LIBRARYCLASS_HH__
#define __LIBRARYCLASS_HH__

// Motor Includes
#include <Adafruit_DRV2605.h>

// Visual Includes
//#include <Adafruit_LEDBackpack.h>

class Library {
public:
	int init(const char* dir_name);
	
	Adafruit_DRV2605 * motor = NULL;
private:
	const char * dir_name;
	
};


#endif /*__LIBRARYCLASS_HH__*/