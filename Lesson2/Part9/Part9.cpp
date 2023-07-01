#include <iostream>
using namespace std;

int main() {
    int number;
    int result;
	cout << "Enter a number: ";
	cin >> number;
	
	if (number > 10) {
		goto label;
	}
	
	for (int i = 0; i < number; i++) {
		cout << i << endl;
	}
	
	label:
		cout << endl;
	    cout << number << " is greater than 10";
}
