#include <iostream>
using namespace std;

int main() {
  int m, n;
  cout << "Enter the numbes m and n" << endl;
  cin >> m >> n;
  
  int array[m][n];
  int numbers[m];
  
  cout << "Enter the values of the array: " << endl;
  for (int i = 0; i < m; i++) {
  	cin >> numbers[i];
  }
  
  for (int i = 0; i < m; i++) {
  	for (int j = 0; j < n; j++) {
  	      array[i][j] = numbers[i];
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
