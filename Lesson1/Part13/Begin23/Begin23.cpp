#include <iostream>
using namespace std;

int main() {
	
	int A;
	cout<< "Enter the number A: ";
	cin >> A;
	
	int B;
	cout<< "Enter the number B: ";
	cin >> B;
	
	int C;
	cout<< "Enter the number C: ";
	cin >> C;
	
	int temp;
	temp = B;
	
    B = A;
    A = C;
    C = temp;
    
    cout << "\n";
	cout << "A is now " << A << "\n";
	cout << "B is now " << B << "\n";
	cout << "C is now " << C;
}
