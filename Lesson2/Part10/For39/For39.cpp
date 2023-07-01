#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
	cout << "Enter a number: ";
	cin >> a; 
	cout << "Enter the secons number. It should be greater than the first one: ";
	cin >> b;
	
	for (int i = a; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << endl;
        }
    }
}
