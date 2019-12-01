#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float D[7];
	int i;
	for(i = 0; i < 7; ++i) {
		cout << "D["<< i <<"] = ";
		cin >> D[i];
	} 
	for(i = 0; i < 7; ++i) {
		if (D[i] < 0)
		cout << i << endl;
	}
	
	return 0;
}
