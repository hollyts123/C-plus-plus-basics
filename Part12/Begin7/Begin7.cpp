#include <iostream>
using namespace std;
int main() {
	const double Pi = 3.14;
	int radius;
	cout<< "Enter the radius of the circle: ";
	cin >> radius;
	double length = 2 * Pi * radius;
	double square = Pi * (radius * radius);
	cout << "The circumference is " << length << "\n";
	cout << "The square is " << square;
}


