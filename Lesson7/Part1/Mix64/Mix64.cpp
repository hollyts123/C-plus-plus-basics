#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    int N, K;

    cout << "Enter the file name: ";
    cin >> fileName;

    cout << "Enter the number of lines (N): ";
    cin >> N;

    cout << "Enter the number of asterisks per line (K): ";
    cin >> K;

    ofstream outputFile(fileName);

    if (outputFile.is_open()) {
        for (int i = 0; i < N; i++) {
            string line(K, '*');
            outputFile << line << endl;
        }

        outputFile.close();
        cout << "File created and written successfully." << endl;
    } else {
        cout << "Error opening the file." << endl;
    }
}
