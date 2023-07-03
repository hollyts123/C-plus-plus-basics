#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++) {
    	cin >> numbers[i];
	}
	
	cout << "Elements with even indexes: " << endl;
    for (int i = 0; i < 10; i += 2) {
    	cout << i << " - " << numbers[i] << endl;
	}
	
	cout << "Elements with odd indexes: " << endl;
	for (int i = 1; i <= 10; i += 2) {
		cout << i << " - " << numbers[i] << endl;
	}
}
