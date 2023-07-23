#include <iostream>
using namespace std;

int main() {
   int arrLength = 10;
   int ptrArray[arrLength];
   cout << "Enter the array values: " << endl;
   for (int i = 0; i < arrLength; i++) {
   	cin >> *(ptrArray + i);
   }
   cout << endl;
  for (int i = 0; i < arrLength; i++) {
  	cout << *(ptrArray + i) << "\t";
  }
}
