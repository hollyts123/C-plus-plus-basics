#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int array[n];
    
    for(int i = n; i > 0; i--) {
        array[i] = i;
        cout << array[i] << " ";
    }
}

