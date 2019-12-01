#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float Z[5] = {1234, 2432, 1234, 1345, 1854};
	float z0;
	cout << "z0 = ";
	cin >> z0;
	int i;
	for(i = 0; i < 5; ++i)
	if(z0 == Z[i])
	cout << "Number of employee is" << " " << i + 1 << " " << "and his salary is" << " " << Z[i] << endl;
	system("pause");
	return 0;
}
