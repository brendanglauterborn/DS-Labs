//==========================================================
// circle.cpp
// Brendan Lauterborn
//==========================================================
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{	
    //variable declarations
	double radius;
	double diameter;
	double area;
	double circ;
	const double pie = 3.14;
	
	//input radius
	cout << "Please enter a value for the radius of a circle: ";
	cin >> radius;
	
	//calculations
	diameter = 2 * radius;
	area =  pie * (radius*radius);
	circ = 2 * pie * radius;
	
    //print results 
	cout << "Diameter = " << diameter << endl;
	cout << "Area = " << area << endl;
	cout << "Circumfrence = " << circ << endl;
	
    return 0;
}
