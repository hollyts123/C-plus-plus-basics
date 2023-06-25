#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double A, B, C;
   cout << "Enter three numbers: " << endl;
   cin >> A >> B >> C;
   
   double D = pow(B, 2) - 4 * A * C;
   cout << D;
   
   double x1, x2; 
   x1 = (-B + sqrt(D)) / (2 * A);
   x2 = (-B - sqrt(D)) / (2 * A);
   
   if (x1 < x2) {
   	cout << "x1: " << x1 << " is bigger than x2: " << x2;
   } else {
   	cout << "x2: " << x2 << " is bigger than x1: " << x1;
   }
}
