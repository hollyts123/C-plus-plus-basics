#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showMessage() {
    	srand(time(nullptr));
	    int number = rand() % 30 + 1;
	    cout << number << endl;
	    if (number >= 15) {
	        cout << "true";
	    } else {
	        cout << "false";
	    }
	}

int main() {
		showMessage();
}
