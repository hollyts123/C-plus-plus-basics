#include <iostream>
#include <cmath>
using namespace std;

int getSquareSum(int a, int b, int c) {
	return pow(a, 2) + pow(b, 2) + pow(c, 2);
}

int getSquareSum(int a, int b, int c, int d) {
	return pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2);
}

double getSquareSum(double a, double b, double c) {
	return pow(a, 2) + pow(b, 2) + pow(c, 2);
}

double getSquareSum(double a, double b, double c, double d) {
	return pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2);
}

int main() {
    cout << getSquareSum(2, 3, 4) << endl;
    cout << getSquareSum(7.5, 1.27, 4.0, 9.82) << endl;
}
