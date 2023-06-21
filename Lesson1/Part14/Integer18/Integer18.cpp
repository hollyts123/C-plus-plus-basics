#include <iostream>
using namespace std;

int main() {
	 int number;
	 cout << "Enter the number greater than 999: ";
	 cin >> number;
    
    while (number <= 999) {
    	cout << "Enter the number greater than 999: ";
    	cin >> number;
	}
	 
	 int result;
	 
	 if (number < 10000) {
	 	result = (number % 10000) / 1000;
	 } else if (number >= 10000 && number < 100000) {
	 	result = (number % 100000) / 1000;
	 } else {
	 	result = (number % 1000000) / 1000;
	 }
	 cout << "The number of thousands: " << result;
}
