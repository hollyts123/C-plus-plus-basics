#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int s;
	double pi = 3.14;
	
	cout << "Enter the square of a circle: ";
	cin >> s;
	
	double d = sqrt(s / pi ) * 2;
	double l = pi * d;
	
	cout << "The diameter is " << d << "\n";
	cout << "The circumference is " << l;
}
