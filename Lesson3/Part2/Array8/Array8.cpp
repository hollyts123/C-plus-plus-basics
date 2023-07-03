#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int k = 0;
    int array[n];
    
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++) {
    	cin >> array[i];
	}
    
    cout << endl;
    for(int i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
        	k++;
        	cout << array[i] << " at index "<< i << endl;
		}
    }
    cout << endl;
    cout << "The total number of odd numbers: " << k;
}
