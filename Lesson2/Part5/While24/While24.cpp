#include <iostream>
using namespace std;

int main() {
    int n;  
	cout << "Enter a number: " << endl;
	cin >> n;
	int a, b = 1;
	
	do {
        int c = a + b;
        a = b;
        b = c;
    } while (b < n);

    if (b == n) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }	
}
