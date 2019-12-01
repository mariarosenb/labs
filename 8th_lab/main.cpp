#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {
	const int n = 3;
	double B[n][n];
	for (int i = 0; i < n; ++i)
	{
    for (int j =0; j < n; ++j) 
	{
	cout << "B[" << i << "][" << j << "]" << " ";
	cin >> B[i][j];
	cout << endl; 
	}
	}
	for (int i = 0; i < n; ++i) 
	{
	for (int j =0; j < n; ++j) 
	{
	cout << B[i][j] << " " ;
	}
	cout << endl;
	}
	bool sym = true;
	for (int i = 0; i < n && sym; ++i)
	for (int j = 0; j < (n - i) && sym; ++j)
	sym = B[i][j] == B[n - j - 1][n - i - 1];
	cout << "Result: " << (sym ? "symmetry" : "dissymetry") << endl;
	return 0;
}
