#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int array[n];
    for(int i = 1; i <= n; i++) {
        array[i] = pow(2, i);
        cout << array[i] << " ";
    }
    cout << endl;
}
