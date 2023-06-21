#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int kilosOfCandies;
	cout << "Enter the number of kilos you bought: ";
	cin >> kilosOfCandies;
	
	double priceOfCandies;
	cout << "How many did you pay for " << kilosOfCandies << " kilos of candies?: ";
	cin >> priceOfCandies;
	
	double priceForOneKilo = priceOfCandies / kilosOfCandies;
	cout << "The price for one kilo of candies is " << priceForOneKilo << "\n";
	
	int kilosWanted;
	cout << "Enter the number of kilos you'd like to buy: ";
	cin >> kilosWanted;
	
	double priceForKilosWanted = kilosWanted * priceForOneKilo;
	
	cout << kilosWanted << " kilos will cost " << priceForKilosWanted;
}
