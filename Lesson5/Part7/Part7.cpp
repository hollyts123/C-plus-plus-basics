#include <iostream>
using namespace std;

int main() {
	int *intPtr = new int;
	*intPtr = 42;
	cout << "The value of my int variable: " << *intPtr << endl;
	cout << "The address in memory where my int variable is stored: " << intPtr << endl;
	cout << "The size of a memory cell for the int variable: " << sizeof(*intPtr) << endl;
	
	cout << endl;
	
	float *floatPtr = new float;
	*floatPtr = 17.33f;
	cout << "The value of my float variable: " << *floatPtr << endl;
	cout << "The address in memory where my float variable is stored: " << floatPtr << endl;
	cout << "The size of a memory cell for the float variable: " << sizeof(*floatPtr) << endl;
	
	cout << endl;
	
	double *doublePtr = new double;
	*doublePtr = 6.980006536221;
	cout << "The value of my double variable: " << *doublePtr << endl;
	cout << "The address in memory where my double variable is stored: " << doublePtr << endl;
	cout << "The size of a memory cell for the double variable: " << sizeof(*doublePtr) << endl;
	
	cout << endl;
	
	char *charPtr = new char;
	*charPtr = 'J';
	cout << "The value of my char variable: " << *charPtr << endl;
	cout << "The address in memory where my char variable is stored: " << static_cast<void*>(charPtr) << endl;
	cout << "The size of a memory cell for the char variable: " << sizeof(*charPtr) << endl;
	
	cout << endl;
	
	bool *boolPtr = new bool;
	*boolPtr = true;
	cout << "The value of my bool variable: " << *boolPtr << endl;
	cout << "The address in memory where my bool variable is stored: " << boolPtr << endl;
	cout << "The size of a memory cell for the bool variable: " << sizeof(*boolPtr) << endl;
	
	delete intPtr;
	delete floatPtr;
	delete doublePtr;
	delete charPtr;
	delete boolPtr;
	
}
