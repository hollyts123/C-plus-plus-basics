#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int array[n];
    
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++) {
    	cin >> array[i];
	}

    cout << endl << "Even numbers in the array" << endl;
    for (int i = 0; i < n; i++) {
    	if (array[i] % 2 == 0) {
    		cout << array[i] << " at index " << i << endl;
		}
	}
    
    cout << endl << "Odd numbers in the array" << endl;
    for(int i = n-1; i >= 0; i--) {
        if (array[i] % 2 != 0) {
        	cout << array[i] << " at index "<< i << endl;
		}
    }
}
