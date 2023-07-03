#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int array[n];
    int oddNumber = 1;
    for(int i = 0; i <= n; i++) {
        array[i] = oddNumber;
        oddNumber += 2;
    }

    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
