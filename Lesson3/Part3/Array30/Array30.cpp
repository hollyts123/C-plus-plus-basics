#include <iostream>
using namespace std;

int main() {
    int array_size;
    int array[array_size];
    
    cout << "Enter the size of an array: " << endl;
    cin >> array_size;
    
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < array_size; i++) {
    	cin >> array[1];
	}
	
	int min = array[1];
	
	for (int i = 3; i < array_size; i += 2) {
        if (array[i] < min) {
        	min = array[i];
		}
	cout << min;
    }
}
