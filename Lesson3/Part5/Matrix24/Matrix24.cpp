#include <iostream>
using namespace std;

int main() {

int array[4][3] = {{23, 17,8}, {12, 5, 99}, {24, 15, 61}, {9, 34, 67}};

    for (int j = 0; j < 3; j++) {
    	int max = array[0][j];
    	for (int i = 1; i < 4; i++) {
    		if (array[i][j] > max) {
    			max = array[i][j];
			}
		}
		cout << "The largest number is " << max << endl;
	}
}
