#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int n = 0;
	double y = 0, sum = 0, eps = 0.01;
	do 
	{
		y = pow(-1.0, n)*(1.0/(2*n+1.0));
		sum += y;
		n++;
		cout << y << endl;
	} while (fabs(y) >= eps);
	cout << "sum = " << sum << endl;
	system("pause");
	return 0;
}
