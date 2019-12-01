#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float x = 8.3, y,  y1, eps = 0.01;
	int n = 5;
	int i = 0.1;
	
	y= x;
	y1 = (1.0/n)*(x/pow(y, n - 1)+(n - 1)*y);
	
	while (fabs(y1 - y) > eps)
	{
		y = y1;
		y1 = (1.0/n)*(x/pow(y, n - 1)+(n - 1)*y);
	}
	cout << " root of value is " << y1;
	system("pause");
	return 0;
}
