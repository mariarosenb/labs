#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	const int n = 3, i = 12;
	float u, y = 0;
	for(int j = n; j <= i; j++)
	{
		u=(j+2.f)/((j+4.f)*(j+6.f));
		y = y + u;
	}
	cout << "suma = " << y << endl;
	const int m = 11;
	int s;
	float u1, p = 1;
	for(s = 5; s <= m; s++)
	{
		u1 = pow(-1,s)*((pow(s,2) + 3)/(3*s + 2));
		p = p*u1;
	}
	cout << "dobutok = " << p << endl;
	system("PAUSE");
	return 0;
}
