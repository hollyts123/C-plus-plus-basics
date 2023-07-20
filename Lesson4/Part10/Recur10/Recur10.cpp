#include <iostream>
using namespace std;

int DigitSum(int K) {
	int sum = 0;
	if (K == 0) {
		return 0;
	} 
	return sum = K + DigitSum(K - 1);
}
int main() {
  int K;
  cout << "Enter the K value: ";
  cin >> K;
  int result = DigitSum(K);
  cout << result;
}
