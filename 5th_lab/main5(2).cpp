#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	int i;
	float p = 1;
	for (i = 2; i <= 20; i = i + 2)
	{
		p = p*i;
	}
	cout << "p = " << p;
	system("pause");
	return 0;
}
