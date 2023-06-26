#include <iostream>
using namespace std;

int main() {
    int n;
    int biggestNum = 1;
    cout << "Enter a number greater than 1: ";
    cin >> n;
    
    while (n <= 1) {
    	cout << "Enter a number greater than 1: ";
	}
	
	while (3 * biggestNum < n) {
		biggestNum++;
	}
	
	cout << biggestNum - 1;
}
