#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
	cout << "Enter a number greater than 0: ";
	cin >> n;
	int power = 0;
	
	for (int i = 1; i <= (2 * n - 1); i += 2) {
		power += i;
		cout << power << " ";
	}
}
