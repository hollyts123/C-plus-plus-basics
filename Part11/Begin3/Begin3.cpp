#include <iostream>
using namespace std;
int main() {
	
	int a;
	int b;
	
	cout << "Enter a the first side of a rectangle: ";
	cin >> a;
	
	cout << "Enter the second side of a rectangle: ";
	cin >> b;
	
	int s = a * b;
	int p = 2 * (a + b);
	
	cout << "The square is " << s << "\n";
	cout << "The perimeter is " << p;
}
