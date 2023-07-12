#include <iostream>
#include <math.h>
using namespace std;

void mean(double a, double b) {
	    double amean = (a + b) / 2;
   	    double gmean = sqrt(a * b);
   	    cout << "The arithmetical mean of " << a << " and " << b << " is " << amean << endl;
   	    cout << "The geometric mean of " << a << " and " << b << " is " << gmean << endl;
   	    cout << endl;
   }

int main() {
	int a, b, c, d;
	cout << "Enter 4 numbers: " << endl;
	cin >> a >> b >> c >> d;
		
	mean(a, b);
	mean(a, c);
	mean(a, d);
}
