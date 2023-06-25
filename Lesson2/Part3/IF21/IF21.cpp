#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x and y coordinates of the dot: " << endl;
    cin >> x >> y;
    
    if (x == 0 && y == 0) {
    	cout << 0;
	} else if (x == 0) {
		cout << 1;
	} else if (y == 0) {
		cout << 2;
	} else {
		cout << 3;
	}
}
