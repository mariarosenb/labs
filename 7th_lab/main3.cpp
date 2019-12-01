 #include <iostream>
 #include <cstdlib>
 #include <math.h>
using namespace std;

int main() {
	int sum;
	int i;
	float A[14] = {4, 15, -2, 45, -23, -12, 14, -2, -58, 67, 43, 12, -5, 1};
	sum = 0;
	for(i = 0; i < 14; ++i) {
		if(A[i] > 0)
		sum = sum + A[i];
	}
	cout << "sum is " << sum;
	system("pause");
	return 0;
}
