#include <iostream>
using namespace std;

int main() {
    int n;  
	cout << "Enter a number greater than 0: ";
	cin >> n;
	
	do {
	   int temp = n % 10;
       cout << temp;
       n /= 10;
	} while (n > 0);
}
