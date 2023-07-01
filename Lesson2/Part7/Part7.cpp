#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;

	do {
		cout << "Enter a number: ";
	    cin >> number;
	    if (number == 0) {
	    	break;
		}
	} while (number < 0 || number > 0);
}
