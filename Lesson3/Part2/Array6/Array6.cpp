#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number greater than 2: ";
    cin >> n;
    int a, b;
    cout << "Enter number A and D: " << endl;
    cin >> a >> b;

    int array[n];
    array[0] = a;
    array[1] = b;
    for(int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
    
    for (int i = 0; i < n; i++) {
    	cout << array[i] << " ";
	}
}
