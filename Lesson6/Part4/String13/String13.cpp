#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cout << "Input your text: " << endl;
	getline(cin, input);
	
	cout << endl;
	
	int numCount = 0;
	for (char c : input) {
		if (isdigit(c)) {
			numCount++;
		}
	}
	
	cout << "Numbers in your text: " << numCount;
}

