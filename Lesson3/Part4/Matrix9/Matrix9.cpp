#include <iostream>
using namespace std;

int main() {

int array[4][3] = {{23, 17,8}, {12, 5, 99}, {24, 15, 61}, {9, 34, 67}};


for (int i = 0; i < 4; i += 2) {
	for (int j = 0; j < 3; j++) {
		cout << array[i][j] << " ";
	}
	cout << endl;
    }
}
