#include <iostream>
#include <cmath>
using namespace std;

double calculateLength(double xA, double yA, double xB, double yB) {
    double length = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    return length;
}

double Perim(double xA, double yA, double xB, double yB, double xC, double yC) {
    double lengthAB = calculateLength(xA, yA, xB, yB);
    double lengthBC = calculateLength(xB, yB, xC, yC);
    double lengthCA = calculateLength(xC, yC, xA, yA);
    double perimeter = lengthAB + lengthBC + lengthCA;
    return perimeter;
}

int main() {
    double xA, yA, xB, yB, xC, yC, xD, yD;
    cout << "Enter the values for xA, yA, xB, yB, xC, yC, xD, yD: " << endl;
    cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;

    double perimeterABC = Perim(xA, yA, xB, yB, xC, yC);
    double perimeterABD = Perim(xA, yA, xB, yB, xD, yD);
    double perimeterACD = Perim(xA, yA, xC, yC, xD, yD);

    cout << "Perimeter of triangle ABC: " << perimeterABC << endl;
    cout << "Perimeter of triangle ABD: " << perimeterABD << endl;
    cout << "Perimeter of triangle ACD: " << perimeterACD << endl;

    return 0;
}
