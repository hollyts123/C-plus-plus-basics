#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter numbers n and k: " << endl;
    cin >> n >> k;
    
    int a[n];
    
    cout << "Enter " << n << " values to store in the array: " << endl;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
    
    cout << endl;
    for (int i = k - 1; i < n; i += k) {
    	cout << a[i] << " ";
	}
}
