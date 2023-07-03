#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number greater than 2: ";
    cin >> n;

    int array[n];
    array[0] = 0;
    array[1] = 1;
    for(int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
    cout << "Fibonacci sequence: " << endl;
    for (int i = 0; i < n; i++) {
    	cout << array[i] << " ";
	}
}
