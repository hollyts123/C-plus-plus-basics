#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
	cout << "Enter a number: " << endl;
	cin >> n;
	
	float result, ni;
	
	for (int i = 1; i <= n; i++) {
		ni = i;
		for (int j = 1; j <= i; j++) {
			ni *= i;
			result += ni;
		}
	}
	
	cout << result;
}
