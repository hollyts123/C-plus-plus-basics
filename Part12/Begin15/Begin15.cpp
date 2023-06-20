#include <iostream>
#include <math.h>
using namespace std;

int main() {
	const double Pi = 3.14;
	int square;
	cout<< "Enter the square of the circle: ";
	cin >> square;
	
	double diameter = sqrt(square / Pi ) * 2;
	double circumference = Pi * diameter;
	
	cout << "The diameter of the circle is " << diameter << "\n";
	cout << "The circumference is " << circumference;
}



