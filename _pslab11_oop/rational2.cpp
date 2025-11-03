// **********************************************
// COSC 501 LAB #11
// Brendan Lauterborn
// PROGRAM-NAME: Lab11_1
// A simple description of the program
//***********************************************

//==========================================================
//_rational.cpp
//==========================================================
#include <iostream>
#include <assert.h>
using namespace std;
//==========================================================
class Rational {
private:
    int n, d; //numerator, denomenator
public:
    Rational() : n(1), d(1) {}; //default constructor
    Rational(int num, int den = 1); //constructor intializes rational values
    //...
    //void Rational::div(Rational rat);
    void printRat();
    void add(Rational rat);
    void sub(Rational rat);
    void mult(Rational rat);
    void div(Rational rat);
    //void Rational::printRat();
    //void Rational::add(Rational rat);
    //void Rational::sub(Rational rat);
    //void Rational::mult(Rational rat);
    //void Rational::div(Rational rat);

};//class_Rational

/**=========================================================
 ** constructor given numerator, denominator
 **=========================================================*/
Rational::Rational (int num, int den) {
    n = num;
    d = den;
}
//r1.div(rat)
/**=========================================================
 ** (a/b) + (c/d) = (a*d + b*c) / (b*d) //add rationals
 **=========================================================*/
void Rational::add(Rational rat) {
    Rational result;
    result.n = (n * rat.d) + (d * rat.n);
    result.d =  d * rat.d;
    printf("\n#addition:\n");
    result.printRat();
}//add


/**=========================================================
 ** (a/b) – (c/d) = (a*d - b*c) / (b*d) //subtract
 **=========================================================*/
void Rational::sub(Rational rat) {
    //...
    Rational result;
    result.n = (n * rat.d) - (d * rat.n);
    result.d = d * rat.d;
    printf("\n#subtraction:\n");
    result.printRat();
}//sub

/**=========================================================
 **  r1      r2      result
 ** (a/b) * (c/d) = (a*c) / (b*d)       //multiply
 **=========================================================*/
void Rational::mult(Rational rat) {
    //...
    Rational result;
    result.n = n * rat.n;
    result.d = d * rat.d;
    printf("\n#multiplication:\n");
    result.printRat();

}//mult

/**=========================================================
 *   r1      r2      result
 *  (a/b) / (c/d) = (a*d) / (c*b)       //divide
 *   n      rat.n    result.n
 *   _   /  _____  = ________
 *   d      rat.d    result.d
 **=========================================================*/
void Rational::div(Rational rat) {
    Rational result;
    assert(d != 0);
    result.n = n*rat.d;
    result.d = d*rat.n;
    printf("\n#division:\n");
    result.printRat();
}//div
    
void Rational::printRat() {
    printf("\n\trat=%d/%d\n", n, d);
}

//======================================================================
// main
//======================================================================
int main() {
    Rational r1(1,6);
    Rational r2(2,1);
    //Rational r3(1,0);
    r1.printRat();
    r2.printRat();
    r1.add(r2);
    r1.sub(r2);
    r1.mult(r2);
    r1.div(r2);
    //=================================================================
    //=================================================================
    printf("\n\n");
    return(0);
} //main
