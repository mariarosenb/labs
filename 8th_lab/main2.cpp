#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float M[5][8] = {1,0,0,1,0,1,0,1,0,2,1,5,7,5,4,7,0,0,0,7,6,5,9,0,9,0,9,0};
	for (int i = 0; i < 5; i++)
	{
	for (int j = 0; j < 8; j++)
	{
	cout << M[i][j] << "  "; 
	}
	cout << endl;
	}
	int n = 0;
	for (int i = 0; i < 5; i++)
    for (int  j = 0; j < 8; j++)
    {
    if (M[i][j] == 0)
    n++;
	}
	cout << "Number of 0 is " << " " << n;
	return 0;
}
