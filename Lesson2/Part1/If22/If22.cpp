#include <iostream>
using namespace std;

int main() {
   int x, y;
   cout << "Enter the x and y coordinates of the dot: " << endl;
   cin >> x >> y;
   
   if (x > 0 && y > 0) {
   	cout << "The dot lies in the first quarter";
   } else if (x < 0 && y > 0) {
   	cout << "The dot lies in the second quarter";
   } else if (x < 0 && y < 0) {
   	cout << "The dot lies in the third quarter";
   } else {
   	cout << "The dot lies in the forth quarter";
   }
}
