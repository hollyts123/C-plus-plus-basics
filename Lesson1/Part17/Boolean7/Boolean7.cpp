#include <iostream>
using namespace std;

int main() {
	 int a, b, c;
	 cout << "Enter the numbers a, b and c: " << endl;
	 cin >> a >> b >> c;
	 
	 if ((b > a && b < c) || (b < a && b > c)) {
	 	cout << true;
	 } else {
	 	cout << false;
	 }
}
