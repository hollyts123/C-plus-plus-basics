#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
	cout << "Enter a number greater than 0: ";
	cin >> n;
	double sum = 0;
	
	for (int i = 1; i <= n; i++) {
		sum += 1/(double)i;
	}
	cout << sum;
}
