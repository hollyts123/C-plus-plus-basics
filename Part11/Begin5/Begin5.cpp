#include <iostream>
using namespace std;
int main() {
	
	int a;
	
	cout << "Enter the edge of a cube: ";
	cin >> a;
	
	int v = a * a * a;
	int s = 6 * (a * a);
	
	cout << "The volume of a cube is " << v << "\n";
	cout << "The square of cube's face' is " << s;
}
