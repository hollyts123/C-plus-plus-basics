#include <iostream>
using namespace std;

int main() {
    int array_size, k, l, sum;
    int array[array_size];
    
    cout << "Enter the size of an array: " << endl;
    cin >> array_size;
    
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < array_size; i++) {
    	cin >> array[i];
	}
	
	cout << "Enter two numbers: " << endl;
    cin >> k >> l;
	
	for (int i = k; i <= l; i++) {
		sum += array[i];
	}
    
    cout << endl << sum;    
}
