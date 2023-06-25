#include <iostream>
using namespace std;

int main() {
    int d, m;
    cout << "Enter a day: ";
    cin>>d;
 
    cout << "Enter a month: ";
    cin>>m;
 
    switch (m) {
    case 1:
        if (d > 19)
            cout << "Aquarius";
        else 
            cout << "Capricorn";
        break;
    case 2:
        if (d > 18) 
            cout << "Pisces";
        else 
            cout << "Aquarius";
        break;
    case 3:
        if (d > 20) 
            cout << "Aries";
        else  
            cout << "Pisces";
        break;
    case 4:
        if (d > 19) 
            cout << "Taurus";
        else  
            cout << "Aries";
        break;
    case 5:
        if (d > 20) 
            cout << "Gemini";
        else  
            cout << "Taurus";
        break;
    case 6:
        if (d > 21)
            cout << "Cancer";
        else 
            cout << "Gemini";
        break;
    case 7:
        if (d > 22) 
            cout << "Leo";
        else 
            cout << "Cancer";
        break;
    case 8:
        if (d > 22) 
            cout << "Virgo";
        else 
            cout << "Leo";
        break;
    case 9:
        if (d > 22) 
            cout << "Libra";
        else 
            cout << "Virgo";
        break;
    case 10:
        if (d > 22) 
            cout << "Scorpio";
        else 
            cout << "Libra";
        break;
    case 11:
        if (d > 22)
            cout << "Sagittarius";
        else 
            cout << "Scorpio";
        break;
    case 12:
        if (d > 21)
            cout << "Capricorn";
        else 
            cout << "Sagittarius";
        break;
    }
}
