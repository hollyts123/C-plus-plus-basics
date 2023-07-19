#include <iostream>
#include <cmath>
using namespace std;

template <class T> T Arctg1(T x, T epsilon) {
    T result = x;
    T term = x;
    T denominator = 1;
    int sign = -1;

    while (abs(term) >= epsilon) {
        denominator += 2;
        term = sign * (x * x) / denominator;
        result += term;
        sign *= -1;
    }

    return result;
}

int main() {
    double x = 0.5;
    int arrLength = 6;
    double epsilonValues[arrLength] = {0.1, 0.01, 0.001, 0.0001, 0.00001, 0.000001};

    for (int i = 0; i < arrLength; i++) {
        double approximatedArctg = Arctg1(x, epsilonValues[i]);
        cout << "arctg(" << x << ") ˜ " << approximatedArctg << " with epsilon = " << epsilonValues[i] << endl;
    }
}
