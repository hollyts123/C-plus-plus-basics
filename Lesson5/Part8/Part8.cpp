#include <iostream>
using namespace std;

int main() {
	int *intPtr = nullptr;
	float *floatPtr = nullptr;
	double *doublePtr = nullptr;
	bool *boolPtr = nullptr;
	
	cout << "The value of the int pointer: " << intPtr << endl;
	cout << "The type of this variable is " << typeid(intPtr).name() << endl; 
	
	cout << endl;
	
	cout << "The value of the float pointer: " << floatPtr << endl;
	cout << "The type of this variable is " << typeid(floatPtr).name() << endl; 
	
	cout << endl;
	
	cout << "The value of the double pointer: " << doublePtr << endl;
	cout << "The type of this variable is " << typeid(doublePtr).name() << endl; 
	
	cout << endl;
	
	cout << "The value of the boolean pointer: " << boolPtr << endl;
	cout << "The type of this variable is " << typeid(boolPtr).name() << endl;
}
