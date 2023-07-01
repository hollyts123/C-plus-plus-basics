#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    double result;
	cout << "Enter a number: ";
	cin >> number;
	
	for (int i = -10; i <= 10; i++) {
		result = (double)number / i;
		if (i == 0) {
			continue;
		}
		cout << result << endl;	
	}
}
