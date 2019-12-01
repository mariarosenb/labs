#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

double a = 0, b = 1.0, eps = 0.001, x1 = a;
double f(double x) 
{
	return pow(x,3.0)-3*pow(x,2.0)+1.0;
}
double findRoot(double a, double b, double x1, double eps)
{
	while(fabs(x1-x) > eps)
	{
		x1 = (a*f(b)-b*f(a))/(f(b)-f(a));
		if(f(a)*f(x1) > 0) {
			a = x1;
		} else
		    b = x1; x = x1;
	}
	return b;
}
int main() {
	cout << findRoot(a, b, x1, eps) << endl;
	system("pause");
	return 0;
}
