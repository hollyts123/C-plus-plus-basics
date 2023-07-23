#include <iostream>
using namespace std;

int main() {
	int a = 9;
	int *ptrA = &a;
	int &refA = a;
	
	cout << "It's the value of the variable: " << a << endl;
	cout << "It's an address of the variable in memory: " << ptrA << endl;
	cout << "Here I access the value of the variable by using a pointer: " << *ptrA << endl;
	cout << "Here's the reference to the variable: " << refA << endl;
	cout << "Here I access the address of the variable via the reference: " << &refA << endl;
	cout << endl;
	
	double b = 18.3;
	double *ptrB = &b;
	double &refB = b;
	
	cout << "It's the value of the variable: " << b << endl;
	cout << "It's an address of the variable in memory: " << ptrB << endl;
	cout << "Here I access the value of the variable by using a pointer: " << *ptrB << endl;
	cout << "Here's the reference to the variable: " << refB << endl;
	cout << "Here I access the address of the variable via the reference: " << &refB << endl;
	cout << endl;
	
	double c = 'G';
	double *ptrC = &c;
	double &refC = c;
	
	cout << "It's the value of the variable: " << c << endl;
	cout << "It's an address of the variable in memory: " << ptrC << endl;
	cout << "Here I access the value of the variable by using a pointer: " << *ptrC << endl;
	cout << "Here's the reference to the variable: " << refC << endl;
	cout << "Here I access the address of the variable via the reference: " << &refC << endl;
	cout << endl;
}
