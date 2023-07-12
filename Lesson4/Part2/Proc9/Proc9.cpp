#include <iostream>
#include <math.h>
using namespace std;

void addLeftDigit(int d, int k) {
	int temp = 10;
	while (k > 10) {
		temp *= 10;
	}
	k += d * temp;
	cout << k << endl;  	
}

int main() {
	int k, d;
	cout << "Enter k: ";
	cin >> k;
	cout << "Enter d from 1 to 9: ";
	cin >> d;
	
	addLeftDigit(d, k);	
}
