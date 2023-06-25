#include <iostream>
using namespace std;

int main() {
   int number1, number2, number3;
   int count = 0;
   cout << "Enter three numbers: " << endl;
   cin >> number1  >> number2 >> number3;
   
   if (number1 > 0) {
   	count++;
   }
   if (number2 > 0) {
   	count++;
   }
   if (number3 > 0) {
   	count++;
   }
   
   cout << "The total number of positive integers is: " << count;
}
