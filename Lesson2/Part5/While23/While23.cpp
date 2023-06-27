#include <iostream>
using namespace std;

int main() {
    int a, b;  
	cout << "Enter the numbers a and b: " << endl;
	cin >> a >> b;
	int nod = a;
	
	do {
	   int temp = a;
       a = b;
       b = temp % b;
       nod = a;
	} while (b != 0);
	
	cout << "NOD is " << nod;
}
