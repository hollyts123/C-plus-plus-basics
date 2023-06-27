#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double e;  
	cout << "Enter a number: ";
	cin >> e;
	
	double ak1, ak2 = 0;
	int k = 1;
	
	while (abs(ak1-ak2)>=e) {
       k++;
       ak2 = ak1;
       ak1 = 2 + 1 / ak2;
   }
   cout << "K = " << k << ", A(k-1) =" << ak2 << ", A(k) =" << ak1;
}
