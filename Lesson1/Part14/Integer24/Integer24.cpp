#include <iostream>
using namespace std;

int main() {
	 int K, D;
	 cout << "Enter the number of the day in the current year: ";
	 cin >> K;
	 D = K % 7;
	 cout << "The number of the day of week is: " << D;	 
}
