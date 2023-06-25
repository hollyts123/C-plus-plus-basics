#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
   int element;
   double value;
   cout << "Enter the element of the circle. Use 1 for radius, 2 for diameter, 3 for length, and 4 for square: ";
   cin >> element;
   cout << "Enter the value: ";
   cin >> value;
   
   switch(element) {
   	case 1:
   		cout << "Radius is " << value << endl;
   		cout << "Diameter is " << 2 * value << endl;
   		cout << "Length is " << 2 * M_PI * value << endl;
   		cout << "Square is " << M_PI * pow(value, 2) << endl;
   		break;
   	case 2:
   		cout << "Radius is " << value / 2 << endl;
   		cout << "Diameter is " << value << endl;
   		cout << "Length is " << 2 * M_PI * (value / 2) << endl;
   		cout << "Square is " << M_PI * pow((value / 2), 2) << endl;
   		break;
   	case 3:
   		cout << "Radius is " << value / 2 * M_PI << endl;
   		cout << "Diameter is " << value / M_PI << endl;
   		cout << "Length is " << value << endl;
   		cout << "Square is " << pow(value, 2) / (4 * M_PI) << endl;
   		break;
   	case 4: 
   	    cout << "Radius is " << sqrt(value / M_PI) << endl;
   	    cout << "Diameter is " << sqrt(value / M_PI) * 2 << endl;
   	    cout << "Length is " << sqrt(value * 4 * M_PI) << endl;
   	    cout << "Square is " << value << endl;
   	    break;
   }
}
