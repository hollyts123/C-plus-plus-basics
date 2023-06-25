#include <iostream>
#include <math.h>
using namespace std;

int main() {
   double x1, y1, x2, y2, x3, y3;
   cout << "Enter x and y coordinates of the first triangle vertice: " << endl;
   cin >> x1 >> y1;
   cout << "Enter x and y coordinates of the second triangle vertice: " << endl;
   cin >> x2 >> y2;
   cout << "Enter x and y coordinates of the third triangle vertice: " << endl;
   cin >> x3 >> y3;
   
   double a, b, c;
   a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
   c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
   
   double perimeter, p, square;
   perimeter = a + b + c;
   p = (a + b + c) / 2;
   square = sqrt(p * (p - a) * (p - b) * (p - c));
   cout << "The perimeter of a triangle is " << perimeter << endl;
   cout << "The square of a triangle is " << square;
}
