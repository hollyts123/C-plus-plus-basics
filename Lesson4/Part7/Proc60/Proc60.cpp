#include <iostream>
#include <cmath>
using namespace std;

double Dist(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void Altitudes(double xA, double yA, double xB, double yB, double xC, double yC, double& hA, double& hB, double& hC) {
    double AB = Dist(xA, yA, xB, yB);
    double BC = Dist(xB, yB, xC, yC);
    double AC = Dist(xA, yA, xC, yC);
    
    double p = (AB + BC + AC) / 2;
    double area = sqrt(p * (p - AB) * (p - BC) * (p - AC)); 
    
    hA = 2 * area / AB;
    hB = 2 * area / BC;
    hC = 2 * area / AC;
}

int main() {
    double xA, yA, xB, yB, xC, yC, xD, yD;
    double hA, hB, hC, hD;
    
    cout << "Enter the coordinates of A (xA, yA): " << endl;
    cin >> xA >> yA;
    cout << "Enter the coordinates of B (xB, yB): " << endl;
    cin >> xB >> yB;
    cout << "Enter the coordinates of C (xC, yC): " << endl;
    cin >> xC >> yC;
    cout << "Enter the coordinates of D (xD, yD): " << endl;
    cin >> xD >> yD;
    
    Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC);
    Altitudes(xA, yA, xB, yB, xD, yD, hA, hB, hD);
    Altitudes(xA, yA, xC, yC, xD, yD, hA, hC, hD);

    cout << "The altitudes of the ABC triangle: hA = " << hA << ", hB = " << hB << ", hC = " << hC << endl;
    cout << "The altitudes of the ABD triangle: hA = " << hA << ", hB = " << hB << ", hD = " << hD << endl;
    cout << "The altitudes of the ACD triangle: hA = " << hA << ", hC = " << hC << ", hD = " << hD << endl;
}
