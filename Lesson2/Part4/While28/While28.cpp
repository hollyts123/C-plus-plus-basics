#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
   float e;
   cout << "Enter the value of e greater than 0:" << endl;
   cin >> e;
   float ak1 = 0;
   float ak = 2;
   int k = 1;
   while (abs(ak - ak1) >= e) {
       ++k;
       ak1 = ak;
       ak = 2 + 1 / ak1;
   }
   cout << "K = " << k << ", A(k-1) = " << ak1 << ", A(k) = " << ak;
   return 0;
}
