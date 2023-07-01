#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;  
	cout << "Enter a first number: ";
	cin >> a;
	cout << "Enter a second number (it should be greater than the first number): ";
	cin >> b;
	int count = 0;
	
	for (int i = b; i > a+1; i--) {
		cout << i-1 << " ";
		count++;
	}
	cout << endl << count;
}
