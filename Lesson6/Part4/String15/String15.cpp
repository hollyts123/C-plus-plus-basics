#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cout << "Input your text: " << endl;
	getline(cin, input);
	
	cout << endl;
	
	int charCount = 0;
	for (char c : input) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z')) {
			charCount++;
		}
	}
	
	cout << "Letters in your text: " << charCount;
}

