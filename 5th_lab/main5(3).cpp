#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	const int n = 17;
	int k = 3;
	double y= 0, x = 15.3, dx = 0.05, xk, xk_1 ;
	for (k; k <= n; k++)
	{
		xk_1 = x + dx;
		xk = xk_1 + dx;
		y = pow(xk + (xk_1), 2)/(fabs(pow (xk, 3))-(pow ((xk_1), 2)));
	}
	 cout << "y = " << y; 
	 system("pause");
	 return 0;
}
