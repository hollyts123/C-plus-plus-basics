#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter a card value from 6 to 14: ";
    cin >> n;
    cout << "Enter a card suit from 1 to 4: ";
    cin >> m;
 
    switch (n) {
    case 6:
        cout << "six ";
        break;
    case 7:
        cout << "seven ";
        break;
    case 8:
        cout << "eight ";
        break;
    case 9:
        cout << "nine ";
        break;
    case 10:
        cout << "ten ";
        break;
    case 11:
        cout << "jack ";
        break;
    case 12:
        cout << "queen ";
        break;
    case 13:
        cout << "king ";
        break;
    case 14:
        cout << "ace ";
        break;
    }
 
    switch (m) {
    case 1:
        cout << "hearts";
        break;
    case 2:
        cout << "diamonds";
        break;
    case 3:
        cout << "spades";
        break;
    case 4:
        cout<<"clubs";
        break;
    }
}
