#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number greater than 1: ";
    cin >> n;
    int a, d;
    cout << "Enter number A and D: " << endl;
    cin >> a >> d;

    int array[n];
    int startNumber = a;
    for(int i = 0; i <= n; i++) {
        array[i] = startNumber;
        startNumber += d;
    }
    cout << "First numbers of the arithmetic progression: " << endl;
    for (int i = 0; i < n; i++) {
    	cout << array[i] << " ";
	}
}
