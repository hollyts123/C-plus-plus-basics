#include <iostream>
using namespace std;

void setArrayValues(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << "\t";
	}
}

void calculateSum(int arr[], int size, int &a, int &b) {
	for (int i = 0; i < size; i += 2) {
		a += *(arr + i);
	}
	cout << endl;
	cout << "The sum of the even numbers in the array is " << a << endl;
	
	cout << endl;
	
	for (int i = 1; i < size; i += 2) {
		b += *(arr + i);
	}
	cout << endl;
	cout << "The sum of the odd numbers in the array is " << b << endl;
}

int main() {
	int evenNumSum = 0;
	int oddNumSum = 0;
	int &ref1 = evenNumSum;
	int &ref2 = oddNumSum;
	
	int arrSize;
	cout << "Enter the array size: " << endl;
	cin >> arrSize;
	
	int* array = new int[arrSize];
	cout << endl;
	cout << "Set the values of an array: " << endl;
	setArrayValues(array, arrSize);
	cout << endl;
	calculateSum(array, arrSize, ref1, ref2);
	
    delete[] array;
    
}
