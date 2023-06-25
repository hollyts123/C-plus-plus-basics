#include <iostream>
using namespace std;

int main() {
	 int a, b, c;
	 cout << "Enter the numbers a, b and c. A should not be equal to 0: \n";
	 cin >> a >> b >> c;
	 while (a == 0) {
	 	cout << "Enter the numbers a, b and c. A should not be equal to 0: \n";
	    cin >> a >> b >> c;
	 }
	 
	 int D = (b * b) - (4 * a * c);
	  if (D >= 0) {
	  	cout << "true";
	  } else {
	  	cout << "false";
	  }
}
