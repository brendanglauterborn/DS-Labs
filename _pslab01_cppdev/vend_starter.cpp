//==========================================================
// vend_starter.cpp
//==========================================================
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double paid;
    double cost;
    double change;

    paid = 4.12;
    cost = 3.15;
    change = paid - cost;
   
    int cents = static_cast<int>(100*change);
    cout << "cents=" << cents << endl;
	cout << "Hello";
    //determine the number of each coin type

    return 0;
}
