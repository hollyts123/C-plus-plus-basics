#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fileName;

    cout << "Enter the file name: " << endl;
    cin >> fileName;

    int num;
    do {
        cout << "Enter a number greater than 1: " << endl;
        cin >> num;
    } while (num <= 1);
    
    cout << endl;

    ofstream fo;
    fo.open(fileName);

    if (fo.is_open()) {
        for (int i = 2; i <= 2 * num; i += 2) {
            fo << i << '\n';
        }
        fo.close(); 
        cout << "File created and written successfully." << endl;
    } else {
        cout << "Error opening the file." << endl;
    }
}
