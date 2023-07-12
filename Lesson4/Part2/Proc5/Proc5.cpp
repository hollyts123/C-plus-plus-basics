#include <iostream>
#include <math.h>
using namespace std;

void rectps(int x1, int y1, int x2, int y2) {
	    double a = abs(x1 - x2);
        double b = abs(y1 - y2);
        double p = 2 * (a + b);
        double s = a * b;
   	    cout << "The perimeter is " << p << " and the square is " << s << endl;
   	    cout << endl;
   }

int main() {
	int x1, y1, x2, y2;
	
	for (int i = 0; i < 3; i++) {
		cout << "Enter 4 numbers: " << endl;
	    cin >> x1 >> x2 >> y1 >> y2;
	    rectps(x1, y1, x2, y2);
	}		
}
