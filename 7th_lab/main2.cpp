#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float y[8] = {3.2, -6.3, 2.1, 3.2, 5.6, -3.1, 2.1, 4.3};
	float z = 0;
	for(int i = 1; i < 8; ++i) {
		z = (z + pow(y[i] - 6, 2))/(z + y[i]);
	}
	cout << z << endl;
	return 0;
}
