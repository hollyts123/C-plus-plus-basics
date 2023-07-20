#include <iostream>
using namespace std;

int Fib1(int N) {
    if (N == 1 || N == 2) {
        return 1;
    }
    return Fib1(N - 2) + Fib1(N - 1);
}

int main() {
  int numbers[5] = {};
  cout << "Enter the numbers: " << endl;
  for (int i = 0; i < 5; i++) {
  	cin >> numbers[i];
  }

    for (int i = 0; i < 5; i++) {
        int number = numbers[i];

        int result = Fib1(number);
        cout << "Fibonacci number " << number << " is " << result << endl;
    } 
}
