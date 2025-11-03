// **********************************************
// COSC 501 LAB #4
// Brendan Lauterborn
// PROGRAM-NAME: Lab4_1
// A simple description of the program
//***********************************************

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Function declaration 
double get_absolute(double x);
double get_power(double b, double e);
double get_sqrt(double x);
double get_round(double x);
double get_ceil(double x);
double get_floor(double x);

int main() {

double x = -4;
double b = 2;
double e = 3;
//cout << "Enter a number";
//cin >> x;

//Calling and printing each function
double abs_val = get_absolute(x);
printf("|%4.2f|= %4.2f\n", x, abs_val);

double pow_value = get_power(b, e);
printf("%4.2f^%4.2f= %4.2f\n", b, e, pow_value);

x = 16;
double sqrt_value = get_sqrt(x);
printf("A square root of %4.2f is: %4.2f\n", x, sqrt_value);

x = 3.2;
double round = get_round(x);
printf("Rounding %4.2f to the nearest integer = %4.2f\n", x, round);

double round_up = get_ceil(x);
printf("Rounding up %4.2f = %4.2f\n", x, round_up);

double round_down = get_floor(x);
printf("Rounding down %4.2f = %4.2f\n", x, round_down);


}


//Creating all of the functions
double get_absolute(double x){
    double value = abs(x);
    return value;
}

double get_power(double x, double y){
    double value = pow(x,y);
    return value;

}

double get_sqrt(double x){
    double value = sqrt(x);
    return value;
}

double get_round(double x){
    double value = round(x);
    return value;
}

double get_ceil(double x){
    double value = ceil(x);
    return value;

}

double get_floor(double x){
    double value = floor(x);
    return value;
}
