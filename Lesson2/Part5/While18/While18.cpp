#include <iostream>
using namespace std;

int main() {
    int n;  
	cout << "Enter a number greater than 0: ";
	cin >> n;
	int count, sum = 0;
	
	do {
	   int temp = n % 10;
       count++;
       sum += temp;
       n /= 10;
	} while (n > 0);
	
	cout << "The number has " << count << " digits" << endl;
	cout << "The sum is " << sum;
}
