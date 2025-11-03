// **********************************************
// COSC 501 LAB #4
// Brendan Lauterborn
// PROGRAM-NAME: Lab4_2
// A simple description of the program
//***********************************************

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Function declarations
double max(double a, double b);
double max(double a, double b, double c);
double max(double a, double b, double c, double d);

main() {

//calling variables and printing results
double result;
result = max(10.0, 20.0);
cout << "Max(10.0, 20.0) = "<< result << endl;
result = max(11.5, 21.2, 5.3);
cout << "Max(11.5, 21.2, 5.3) = " << result << endl;
result = max(1.8, 2.2, 1.7, 2.1);
cout << "Max(1.8, 2.2, 1.7, 2.1) = " << result << endl;

return 0;

}

//Functions
double max(double a, double b){
    double max = a;
    if(b > a){
        max = b;
    }
    return max;
}

double max(double a, double b, double c){
    double new_max = max(max(a, b), c);
    return new_max;
}

double max(double a, double b, double c, double d){
    double new_max = max(max(a,b),max(c,d));
    return new_max;
}