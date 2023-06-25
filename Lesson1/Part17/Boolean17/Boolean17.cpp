#include <iostream>
using namespace std;

int main() {
	 int number;
	 cout << "Enter a number: \n";
	 cin >> number;
	 cout << (number % 2 == 1 && number > 99 && number < 1000);
}
