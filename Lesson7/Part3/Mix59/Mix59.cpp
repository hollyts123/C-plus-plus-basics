#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string fileName;

    cout << "Enter the name of the file containing real numbers: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        cout << "Error opening the file." << endl;
    }

    ofstream tempFile("temp.txt");

    if (!tempFile.is_open()) {
        cout << "Error creating a temporary file." << endl;
    }

    double num;

    while (inputFile >> num) {
        num = num * num; 
        tempFile << num << " "; 
    }

    inputFile.close();
    tempFile.close();

    if (remove(fileName.c_str()) != 0) {
        cout << "Error deleting the original file." << endl;
    }

    if (rename("temp.txt", fileName.c_str()) != 0) {
        cout << "Error renaming the file." << endl;
    }

    cout << "Squares have been written to the file." << endl;
}
