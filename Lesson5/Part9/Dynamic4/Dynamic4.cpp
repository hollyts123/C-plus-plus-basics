#include <iostream>
using namespace std;

int main() {
	int N;
    cout << "Enter number N: " << endl;
    cin >> N;
    
    while (N <= 0) {
    	cout << "You entered invalid number. The number should be greater than 0: " << endl;
    	cin >> N;
	}
    
    int* arr = new int[N]; 
    
    cout << "Enter the values for an array: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout << endl;
    cout << "The top of the stack is at the address " <<&arr[N - 1];
     
    delete[] arr;
}
