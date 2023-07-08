#include <iostream>
using namespace std;

int main() {
  int m, n;
  cout << "Enter the numbes m and n" << endl;
  cin >> m >> n;
  
  cout << endl;
  cout << "Enter the numbers: " << endl;
  int array[m][n];
  for (int i = 0; i < m; i++) {
  	for (int j = 0; j < n; j++) {
  	      array[i][j] = 10 * (i + 1);
	  }
  }
  
  cout << endl;
  for (int i = 0; i < m; i++) {
  	cout << endl;
  	for (int j = 0; j < n; j++) {
  		cout << array[i][j] << " ";
	  }
  }
}
