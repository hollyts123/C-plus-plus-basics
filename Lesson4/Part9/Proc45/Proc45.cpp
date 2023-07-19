#include <iostream>
#include <cmath>
using namespace std;

template <class T> T Power4(T x, T a, T epsilon) {
    T result = 1 + a * x;
    T term = a * x;
    T numerator = a;
    T denominator = 1;

    int n = 2;
    while (abs(term) >= epsilon) {
        numerator *= (a - n + 1);
        denominator *= n;
        term = (numerator * pow(x, n)) / denominator;
        result += term;
        n++;
    }
    return result;
}

int main() {
    double x = 0.5; 
    double a = 2; 
	int arrLength = 6; 
    double epsilonValues[arrLength] = {0.1, 0.01, 0.001, 0.0001, 0.00001, 0.000001};

    for (int i = 0; i < arrLength; i++) {
        double approximatedResult = Power4(x, a, epsilonValues[i]);
        cout << "(1 + " << x << ")^" << a << " ˜ " << approximatedResult << " with epsilon = " << epsilonValues[i] << endl;
    }
}
