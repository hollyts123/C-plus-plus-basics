#include <iostream>
using namespace std;

int main() {
   int a = 10;
   float b = 2.5f;
   double c = 0.9278;
   char d = '#';
   bool e = false;
   
   int *ptrA = &a;
   float *ptrB = &b;
   double *ptrC = &c;
   char *ptrD = &d;
   bool *ptrE = &e;
   
   cout << a << "\t" << ptrA << "\t" << *ptrA << endl;
   cout << b << "\t" << ptrB << "\t" << *ptrB << endl;
   cout << c << "\t" << ptrC << "\t" << *ptrC << endl;
   cout << d << "\t" << ptrD << "\t" << *ptrD << endl;
   cout << e << "\t" << ptrE << "\t" << *ptrE << endl;
}
