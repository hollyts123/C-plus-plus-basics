#include <iostream>
using namespace std;

int main() {
    double p;
    double s = 10;
    int days = 1;
    cout << "Enter the persentage for increasing the mileage: ";
    cin >> p;
    
    while (s <= 200) {
        s += s * p / 100; 
        days++;
    }
    
    cout << "The total mileage for " << days << " days is " << s;    
}
