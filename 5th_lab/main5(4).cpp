#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
while(true) {
    int switcher = 0;
	int k = 3; 
	int l = 17;
    double y = 0, x = 15.3, dx = 0.05, xk = x + dx*k, xk_1 = x + dx*(k - 1);
    cout << "\nPress 1: for\nPress 2: while\nPress 3: do while\nPress 4: exit\n" << endl;
    cin >> switcher;
    switch(switcher) {
	    case 1:
		for (k; k<=l; k++) {
     		y = pow((xk + xk_1),2)/(fabs(pow (xk, 3))-(pow (xk_1, 2)));
     		xk = xk_1 + dx; 
		}
		cout << y;
     	break;
     	case 2:
     	while(k <= l) {
     		y = pow((xk + xk_1),2)/(fabs(pow (xk, 3))-(pow (xk_1, 2)));
     		xk = xk_1 + dx;
     	k++;
		}
		cout << y;
		break;
		case 3:
		do {
			y = pow((xk + xk_1),2)/(fabs(pow (xk, 3))-(pow (xk_1, 2)));
     		xk = xk_1 + dx;
     	k++;
		} while (k < l);
		cout << y;
		break;
		case 4:
		exit(0);
		break;
	    }
	 }
	system ("pause");
	return 0;
}
