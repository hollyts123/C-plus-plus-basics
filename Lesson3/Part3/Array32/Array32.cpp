#include <iostream>
using namespace std;

int main() {
    int array_size;
    int array[array_size];
    
    cout << "Enter the size of an array: " << endl;
    cin >> array_size;
    
    cout << endl;
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < array_size; i++) {
    	cin >> array[1];
	}
	
	cout << endl;
	for (int i = 1; i < array_size - 1; i++) {
        if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
        	cout << i << endl;
		}
	cout << "Not found!" << endl;
    }
}
