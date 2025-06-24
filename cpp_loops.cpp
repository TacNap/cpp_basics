#include <iostream>
#include <string>
using namespace std;

void loops() {
	int v[] = {11, 22, 33, 44};

	// Loop through object - Pass by Value
	for (auto i : v) {
		i += 10;
		//cout << i << endl;
	}

	// Loop with Pointer - Pass by Reference
	for (auto& i : v) {
		i += 10;		
	}
	


}

