#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number in the range from 1 to 999: " << endl;
    cin >> number;
	
	
	if (number / 100 > 0 && number / 100 < 10) {
		cout << "The number is: three-digit";
	} else if (number / 10 > 0 && number / 10 < 10) {
		cout << "The number is: two-digit";
	} else if (number < 10 && number > 0){
	    cout << "The number is: one-digit";	
	} else {
		cout << "You entered invalid number!";
	}
	
	if (number % 2 == 0) {
		cout << " even ";
	} else {
		cout << " odd";
	}
}
