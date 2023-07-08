#include <iostream>
using namespace std;

int main() {
   int num = 4;
   int num2 = 10;
   int* pointer = &num;
   
   cout << "I'm just a number " << num << endl;
   cout << "I'm an address where " << num << " is located: " << pointer << endl;
   cout << "I'm the adress of the pointer itself: " << &pointer;
   
   pointer = &num2;
   cout << endl << "I'm now pointing to " << num2 << " and my adress is now " << pointer;
   
}
