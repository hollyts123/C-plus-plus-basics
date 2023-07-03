#include <iostream>
using namespace std;

int main() {
    int array_size;
    int array[array_size];
    
    cout << "Enter the size of an array: " << endl;
    cin >> array_size;
    
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < array_size; i++) {
    	cin >> array[i];
	}
	
	int min = array[2];
	
	cout << endl;
	for (int i = 2; i < array_size; i += 2) {
        if (array[i] < min) {
        	min = array[i];
		}
    }
    cout << min;
}
