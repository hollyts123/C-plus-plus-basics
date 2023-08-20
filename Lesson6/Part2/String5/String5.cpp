#include <iostream>
using namespace std;

int main() {
	int N;
	do {
		cout << "Enter the number between 1 and 26: ";
		cin >> N;
	} while (N < 1 || N > 26);
	
	char letter = 'z';
	
	for (int i = 0; i < N; i++) {
		cout << letter << " ";
		letter--;
	}
}
