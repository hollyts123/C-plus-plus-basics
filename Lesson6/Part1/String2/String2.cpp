#include <iostream>
using namespace std;

int main() {
	int N;
	
	do {
		cout << "Enter a number between 32 and 126: ";
		cin >> N;
	} while (N < 32 || N > 126);
	
	char symbol = N;
	cout << "The number " << N << " corresponds to the symbol " << symbol;
}
