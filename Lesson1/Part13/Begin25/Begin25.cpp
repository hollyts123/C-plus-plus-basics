#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int x;
	cout<< "Enter the x value: ";
	cin >> x;
	
	int y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "y = " << y;
}
