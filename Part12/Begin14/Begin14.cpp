#include <iostream>
using namespace std;
int main() {
	const double Pi = 3.14;
	int L;
	cout<< "Enter the circumference: ";
	cin >> L;
	
	double radius = L / (2 * Pi);
	double square = Pi * (radius * radius);
	
	cout << "The radius of the circle is " << radius << "\n";
	cout << "The square of the circle is " << square;
}


