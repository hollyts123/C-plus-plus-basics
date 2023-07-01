#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
	cout << "Enter 2 numbers: " << endl;
	cin >> n >> k;
	
	float result, nk;
	
	for (int i = 1; i <= n; i++) {
		nk = i;
		for (int j = 1; j <= k; j++) {
			nk *= i;
			result += nk;
		}
	}
	
	cout << result;
}
