#include <iostream>
using namespace std;

int main() {
    int n;
    int power = 1;
    bool isPowerOfThree = false;
    cout << "Enter a number greater than 0: ";
    cin >> n;
    
    while (n <= 0) {
    	cout << "The number should be greater than 0. Try again: ";
	}
	
	while (power <= n) {
        if (power == n) {
            isPowerOfThree = true;
            break;
        }
        power *= 3;
    }
    
    if (isPowerOfThree) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}
