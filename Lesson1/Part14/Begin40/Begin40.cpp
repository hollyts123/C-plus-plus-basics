#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
  double a1, b1, c1;
  double a2, b2, c2;
  double x, y, D;
  cout << "Enter A1, B1 and C1 values: \n";
  cin >> a1 >> a2 >> a1;   
  cout << "Enter A2, B2 and C2 values: \n";
  cin >> a2 >> b2 >> c2;
  
  D = a1 * b2 - a2 * b1;
  x = (c1 * b2 - c2 * b1) / D;
  y = (a1 * c2 - a2 * c1) / D;
  cout << "x = " << x << "\n";
  cout << "y = " << y;
}
