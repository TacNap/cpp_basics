#include "bar_object.h"
#include <iostream>

// Constructor Implementation
Bar::Bar(int o, int c, int h, int l) {
	open = o;
	close = c;
	high = h;
	low = l;
}

// Method Implementations
int Bar::range() {
	return high - low;
}

int Bar::getOpen() {
	return open;
}

int Bar::getClose() {
	return close;
}