#include <iostream>
using namespace std;

int main() {
	int N;
	do {
		cout << "Enter the number between 1 and 26: ";
		cin >> N;
	} while (N < 1 || N > 26);
	
	char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
	for (int i = 0; i < N; i++) {
		cout << letters[i] << " ";
	}
}
