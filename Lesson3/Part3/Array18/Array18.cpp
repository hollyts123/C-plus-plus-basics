#include <iostream>
using namespace std;

int main() {
	const int ARRAY_SIZE = 10;
    int a[ARRAY_SIZE];
    int rand();
    
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
    	cin >> a[i];
	}
	
	cout << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
    
    int ak = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
    	if (a[i] < a[9]) {
    		ak = a[i];
    		break;
		}
	}
	
	if (ak == 0) {
		cout << endl;
		cout << 0;
	} else {
		cout << endl;
		cout << ak;
	}
}
