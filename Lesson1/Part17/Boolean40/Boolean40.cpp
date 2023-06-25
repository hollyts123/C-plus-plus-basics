#include <iostream>
using namespace std;

int main() {
	int x1, y1, x2, y2;
	 
	cout << "Enter the x and y coordinates for the first field in the range from 1 to 8: \n";
	cin >> x1 >> y1;
	
	cout << "Enter the x and y coordinates for the second field in the range from 1 to 8: \n";
	cin >> x2 >> y2;
	
	if ((x1 - x2) == 1 && (y1 - y2) == 2 || (x1 - x2) == 2 && (y1 - y2) == 1)	{
		cout << "true";
	} else {
		cout << "false";
	}
}
