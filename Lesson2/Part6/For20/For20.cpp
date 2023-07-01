#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
	cout << "Enter a number greater than 0: ";
	cin >> n;
	double n1 = 1;
	double factorial = 0;
	
	for (int i = 1; i <= n; i++) {
		 n1 *= (double)i;
		 factorial += n1;
	}
	
	cout << factorial;
}
