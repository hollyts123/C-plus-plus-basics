#include <iostream>
using namespace std;

void returnSum(int *arr, int arrLen, int *a, int *b) {
	for (int i = 0; i < arrLen; i += 2) {
		*a += *(arr + i);
	}
	
	for (int i = 1; i < arrLen; i += 2) {
		*b += *(arr + i);
	}
	cout << "The sum of even elements in the array is " << *a << endl;
	cout << "The sum of odd elements in the array is " << *b << endl;
}

int main() {
	int arrLength;
	int *array = new int[arrLength];
	int evenNumSum = 0; 
	int oddNumSum = 0;
	int *ptr1 = &evenNumSum;
	int *ptr2 = &oddNumSum;
	
	cout << "Set the array length: " << endl;
	cin >> arrLength;
	cout << "Set the array values: " << endl;
	for (int i = 0; i < arrLength; i++) {
		cin >> array[i];
	}
	
	cout << endl;
	for (int i = 0; i < arrLength; i++) {
		cout << array[i] << "\t";
	}
	
	cout << endl;
	returnSum(array, arrLength, ptr1, ptr2);
}
