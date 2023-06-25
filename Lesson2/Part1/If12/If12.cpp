#include <iostream>
using namespace std;

int main() {
   int a, b, c;
   cout << "Enter three numbers: " << endl;
   cin >> a >> b >> c;
   
   int smallestNum = a;
   
   if (smallestNum > b) {
   	smallestNum = b;
   }
   if (smallestNum > c) {
   	smallestNum = c;
   }
    cout << "The smallest number is " << smallestNum;
}
