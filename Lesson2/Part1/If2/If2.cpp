#include <iostream>
using namespace std;

int main() {
   int number;
   cout << "Enter a number: ";
   cin >> number;
   if (number > 0) {
   	number ++;
   } else {
   	number -= 2;
   }
   cout << number;
}
