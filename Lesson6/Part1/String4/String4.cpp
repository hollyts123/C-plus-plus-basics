#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char string[200];
	cout << "Input your text: " << endl;
	cin.getline(string, 200);
	
	cout << strrev(string);
}
