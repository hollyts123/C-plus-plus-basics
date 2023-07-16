#include <iostream>
#include <cmath>
using namespace std;

double calculateLength(double xA, double yA, double xB, double yB) {
    double length = sqrt(std::pow(xB - xA, 2) + pow(yB - yA, 2));
    return length;
}

int main() {
    double xA, yA, xB, yB, xC, yC, xD, yD;
    cout << "Enter the values for xA, yA, xB, yB, xC, yC, xD, yD: " << endl;
    cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;

    double lengthAB = calculateLength(xA, yA, xB, yB);
    double lengthAC = calculateLength(xA, yA, xC, yC);
    double lengthAD = calculateLength(xA, yA, xD, yD);

    cout << "Length of a segment AB: " << lengthAB << endl;
    cout << "Length of a segment AC: " << lengthAC << endl;
    cout << "Length of a segment AD: " << lengthAD << endl;

    return 0;
}
