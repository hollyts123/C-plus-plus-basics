#include <iostream>
using namespace std;

int main() {
    int n;
    double doubleFactorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n > 0) {
        doubleFactorial *= n;
        n -= 2;
    }
    cout << "The double factorial is " << doubleFactorial;
}
    
    
