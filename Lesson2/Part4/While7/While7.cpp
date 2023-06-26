#include <iostream>
using namespace std;

int main() {
    int n;
    int power = 1;
    cout << "Enter a number: ";
    cin >> n;
    
    while (power * power <= n) {
    	power++;
	}
	
	cout << power;
}
    
