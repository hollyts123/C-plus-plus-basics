#include <iostream>
using namespace std;

int promptUserForYear() {
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (year <= 0) {
        do {
        cout << "The year should be greater than 0. Enter the year: ";
        cin >> year;
        } while (year <= 0);
    }
    return year;
}

int promptUserForMonth() {
    int month;
    cout << "Enter the month: ";
    cin >> month;
    if (month < 1 || month > 12) {
        do {
            cout << endl << "You entered an incorrect month value. Enter the value between 1 and 12 for a month: ";
            cin >> month;
        } while (month < 1 || month > 12);
    }
    return month;
}

bool IsLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int MonthDays(int month, int year) {
    bool result = IsLeapYear(year);
    int monthDays;
    if (result) {
        cout << "Year " << year << " had 366 days, and was a leap year." << endl;
        switch(month) {
            case 1:
                monthDays = 31;
                cout << "January in year " << year << " had " << monthDays << " days"; 
                break;
            case 3:  
                monthDays = 31;
                cout << "March in year " << year << " had " << monthDays << " days";
                break;
            case 5:
                monthDays = 31;
                cout << "May in year " << year << " had " << monthDays << " days";
                break;
            case 7:
                monthDays = 31;
                cout << "July in year " << year << " had " << monthDays << " days";
                break;
            case 8:
                monthDays = 31;
                cout << "August in year " << year << " had " << monthDays << " days";
                break;
            case 10:
                monthDays = 31;
                cout << "October in year " << year << " had " << monthDays << " days";
                break;
            case 12:
                monthDays = 31;
                cout << "December in year " << year << " had " << monthDays << " days";
                break;
            case 2:
                monthDays = 29;
                cout << "February in year " << year << " had " << monthDays << " days";
                break;
            case 4:
                monthDays = 30;
                cout << "April in year " << year << " had " << monthDays << " days";
                break;
            case 6:
                monthDays = 30;
                cout << "June in year " << year << " had " << monthDays << " days";
                break;
            case 9:
                monthDays = 30;
                cout << "September in year " << year << " had " << monthDays << " days";
                break;
            case 11:
                monthDays = 30;
                cout << "November in year " << year << " had " << monthDays << " days";
                break;
        } 
    } else {
        cout << "Year " << year << " had 365 days, and was a non-leap year." << endl;
        switch(month) {
            case 1:
                monthDays = 31;
                cout << "January in year " << year << " had " << monthDays << " days"; 
                break;
            case 3:
                monthDays = 31;
                cout << "March in year " << year << " had " << monthDays << " days";
                break;
            case 5:
                monthDays = 31;
                cout << "May in year " << year << " had " << monthDays << " days";
                break;
            case 7:
                monthDays = 31;
                cout << "July in year " << year << " had " << monthDays << " days";
                break;
            case 8:
                monthDays = 31;
                cout << "August in year " << year << " had " << monthDays << " days";
                break;
            case 10:
                monthDays = 31;
                cout << "October in year " << year << " had " << monthDays << " days";
                break;
            case 12:
                monthDays = 31;
                cout << "December in year " << year << " had " << monthDays << " days";
                break;
            case 2:
                monthDays = 28;
                cout << "February in year " << year << " had " << monthDays << " days";
                break;
            case 4:
                monthDays = 30;
                cout << "April in year " << year << " had " << monthDays << " days";
                break;
            case 6:
                monthDays = 30;
                cout << "June in year " << year << " had " << monthDays << " days";
                break;
            case 9:
                monthDays = 30;
                cout << "September in year " << year << " had " << monthDays << " days";
                break;
            case 11:
                monthDays = 30;
                cout << "November in year " << year << " had " << monthDays << " days";
                break;
        } 
    }
    return monthDays;
}

int main() {
    int year1 = promptUserForYear();
    int month1 = promptUserForMonth();
    MonthDays(month1, year1);
    
    cout << endl << endl;
    
    int year2 = promptUserForYear();
    int month2 = promptUserForMonth();
    MonthDays(month2, year2);
    
    cout << endl << endl;
    
    int year3 = promptUserForYear();
    int month3 = promptUserForMonth();
    MonthDays(month3, year3);
}
