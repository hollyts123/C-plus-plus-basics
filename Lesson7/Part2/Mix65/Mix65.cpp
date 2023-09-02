#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        cout << "Error opening the file." << endl;
    }

    int charCount = 0;
    int lineCount = 0;
    char currentChar;

    while (inputFile.get(currentChar)) {
        if (currentChar != '\n' && currentChar != '\r') {
            charCount++;
        }

        if (currentChar == '\n') {
            lineCount++;
        }
    }

    lineCount++;

    inputFile.close();

    cout << "Number of characters (excluding EOLN and EOF): " << charCount << endl;
    cout << "Number of lines: " << lineCount << endl;
}
