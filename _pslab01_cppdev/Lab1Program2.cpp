//==========================================================
// vend.cpp
// Brendan Lauterborn
//==========================================================
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    //variable declarations
	double paid;
    double cost;
	double change;
	
    //calculate the change
	cout << "Please enter total paid amount: ";
	cin >> paid;
	cout << "Please enter total purchased amount: ";
	cin >> cost;
	change = paid - cost;
	
    //determine the number of each coin type
	int cents = static_cast<int>(100*change);
	
	int q = cents / 25;
	cents = cents % 25;
	int d = cents / 10;
	cents = cents % 10;
	int n = cents / 5;
	cents = cents % 5;
	int p = cents;
	
	//print the results
	cout << "Quarters: " << q << endl;
	cout << "Dimes: " << d << endl;
	cout << "Nickels: " << n << endl;
	cout << "Pennies: " << p << endl;
	

    return 0;
}
