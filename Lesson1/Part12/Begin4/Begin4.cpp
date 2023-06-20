#include <iostream>
using namespace std;
int main() {
	const double Pi = 3.14;
	int diameter;
	cout << "Enter the diameter of the circle: ";
	cin >> diameter;
	double length = Pi * diameter;
	cout  << "The circumference is " << length;
}
