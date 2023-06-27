#include <iostream>
using namespace std;

int main() {
    int a;  
	cout << "Enter a number greater than 0: ";
	cin >> a;
	int k = 0;
	double sum = 0;
	
	do {
		k++;
		sum += 1 / (float)k;
	}  
	while (sum <= a);
	
	cout << k << endl << sum;
}
