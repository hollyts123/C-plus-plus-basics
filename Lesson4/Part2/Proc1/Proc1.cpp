#include <iostream>
#include <math.h>
using namespace std;


int powerA3(double a) {
   	   return pow(a, 3);
   }

int main() {
	int a, b;
	for (int i = 0; i < 5; i++) {
		cout << "Enter a number: ";
		cin >> a;
		b = powerA3(a);
		cout << a << " raised to power of 3 " << "is " << b << endl;
	}
}
