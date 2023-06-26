#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int previousNum = 1;
    int currentNum = 1;

    while (currentNum < N) {
        int temp = currentNum;
        currentNum = previousNum + currentNum;
        previousNum = temp;
    }

    if (currentNum == N) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
