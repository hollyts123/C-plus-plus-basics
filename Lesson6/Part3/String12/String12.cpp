#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N;
	do {
		cout << "Input a number greater than 0: ";
		cin >> N;
	} while (N <= 0);
	
	char string[200];
	cout << "Enter the text: " << endl;
	cin.ignore();
	cin.getline(string, 50);
	
	int length = strlen(string);
	
	for (int i = 0; i < length; i++) {
		cout << string[i];
		if (i == length - 1) {
			cout << " ";
		} else {
			for (int j = 0; j < N; j++) {
			cout << '*';
		    }
		}
	}
	cout << endl;
}
