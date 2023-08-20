#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char string[200];

	cout << "Input text: " << endl;
	cin.getline(string, 200);
	
	int length = strlen(string);
	
	int firstSymbol = string[0];
	int lastSymbol = string[length - 1];
	cout << "The first symbol in your text is " << firstSymbol << endl;
	cout << "The last symbol in your text is " << lastSymbol << endl;
}
