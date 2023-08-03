#include <iostream>
using namespace std;

int main() {
	int size = 10;
	int* arr = new int[size];
	cout << "Enter the values of an array: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	int* evenArr = new int[size / 2];
	int* oddArr = new int[size / 2];
	
	for (int i = 0; i < size; i += 2) {
		if (i % 2 == 0) {
			evenArr[i] = arr[i];
		}
	}
	
//	for (int i = 0; i < size; i++) {
//		if (i % 2 != 0) {
//			oddArr[i] = arr[i];
//		}
//	}
	
	cout << endl << "The numbers with even indexes: " << endl;
	for (int i = 0; i < size / 2; i++) {
		cout << evenArr[i] << " at address " << &evenArr[i] << endl;
	}
	
//	cout << endl;
//	
//	cout << endl << "The numbers with odd indexes: " << endl;
//	for (int i = 0; i < size / 2; i++) {
//		cout << oddArr[i] << "at address " << &evenArr[i] << endl;
//	}
}
