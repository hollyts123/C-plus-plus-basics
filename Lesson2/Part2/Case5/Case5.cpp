#include <iostream>
using namespace std;

int main() {
   int num1, num2, operation;
   cout << "Enter the first number: ";
   cin >> num1;
   cout << "Enter the second number not equal to 0: ";
   cin >> num2;
   
   if (num2 == 0) {
   	cout << "The second number should not be equal to 0! Enter a valid number: ";
   	cin >> num2;
   }
   
   cout << "Enter an operation from 1 to 4, where "<< "1 is addition, 2 is subtraction, 3 is multiplication, and 4 is division: ";
   cin >> operation;
   
   switch(operation) {
   	case 1:
   		cout << num1 << " + " << num2 << " = " << num1 + num2;
   		break;
   	case 2: 
	   	cout << num1 << " - " << num2 << " = " << num1 - num2;
	   	break;
	case 3:
		cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;
	case 4:
		cout << num1 << " / " << num2 << " = " << num1 / num2;
		break;
	default: 
	    cout << "You entered an invalid operation!";
   }
}
