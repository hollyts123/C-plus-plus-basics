#include <iostream>
using namespace std;
int main() {
	const double Pi = 3.14;
	int radius1;
	cout<< "Enter the radius of the bigger circle: ";
	cin >> radius1;
	
	int radius2;
	cout<< "Enter the radius of the smaller circle: ";
	cin >> radius2;
	
	while (radius2 > radius1) {
		cout << "The second circle should be smaller than the first one!" << "\n";
		cout << "Enter the radius of the smaller circle: ";
		cin >> radius2;
	}
	
	double S1 = Pi * (radius1 * radius1);
	double S2 = Pi * (radius2 * radius2);
	double S3 = S1 - S2;
	
	cout << "The square of the bigger circle is " << S1 << "\n";
	cout << "The square of the smaller circle is " << S2 << "\n";
	cout << "The square of the ring is " << S3;
}


