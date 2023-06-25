#include <iostream>
using namespace std;

int main() {
   int x;
   cout << "Enter the value of x: ";
   cin >> x;
   
   if (x < -2 && x > 2) {
   	cout << "fx = " << 2 * x;
   } else {
   	cout << "fx = " << -3 * x;
   }
}
