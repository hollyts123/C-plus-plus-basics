#include <iostream>
using namespace std;

double Fact2(int N) {
	
    if (N == 0 || N == 1) {
        return 1;
    }
    
    else if (N % 2 == 0) {
        return N * Fact2(N - 2);
    }
    else {
        return N * Fact2(N - 2);
    }
}

int main() {
  int numbers[5] = {};
  cout << "Enter the values of the array: " << endl;
  for (int i = 0; i < 5; i++) {
  	cin >> numbers[i];
  }

    for (int i = 0; i < 5; i++) {
        int num = numbers[i];
        long long result = Fact2(num);
        cout << "Double factorial of " << num << " is " << result << endl;
    }
}
