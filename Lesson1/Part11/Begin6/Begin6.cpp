#include <iostream>
using namespace std;
int main() {
	
	int a, b, c;
	
	cout << "Enter the length of cuboid's first edge: ";
	cin >> a;
	
	cout << "Enter the length of cuboid's second edge: ";
	cin >> b;
	
	cout << "Enter the length of cuboid's third edge: ";
	cin >> c;
	
	int v = a * b * c;
	int s = 2 * (a * b + b * c + a * c);
	
	cout << "The volume of a cuboid is " << v << "\n";
	cout << "The square of a cuboid's face is " << s;
}
