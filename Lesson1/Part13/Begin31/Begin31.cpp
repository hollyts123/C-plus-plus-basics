#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int x;
	cout << "Enter the x value: ";
	cin >> x;
	
	int y = 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2;
	cout << "y = " << y;
}
