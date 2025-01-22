#ifndef BAR_OBJECT_H
#define BAR_OBJECT_H

#include <string>

class Bar {
private:
	int open;
	int close;
	int high;
	int low;

public:
	Bar(int o, int c, int h, int l); // Constructor
	int range(); 					 // Method
	int getOpen();					 // Getters
	int getClose();


};

#endif


