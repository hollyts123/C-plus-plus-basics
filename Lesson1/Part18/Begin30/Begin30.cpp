#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {
   double radians, degrees;
   cout << "Enter the angle in radians: ";
   cin >> radians;
   degrees = radians * 180 /  M_PI;
   cout << "The angle is " << degrees << " degrees";
}
