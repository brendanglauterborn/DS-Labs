//==========================================================
// datatypes.cpp
// variable types and operations
//==========================================================
#include <iostream>
#include <string>
#include <climits>
#include <typeinfo>
using namespace std;

int main()
{
    int x = 7, y = 3;
    float f1 = 7.0, f2 = 3.0;
    char c1 = '7', c2 = '3', c3 = 'A';
    string s1 = "7", s2 = "3", s3 = "A";
    bool flag = true;

    cout << "\n *****A. Integer Type*******\n";
    printf("x=%d, y=%d\n", x, y);
    cout << "x+y = " << x+y << endl;
    cout << "x-y = " << x-y << endl;
    cout << "x*y = " << x*y << endl;
    cout << "x/y = " << x/y << endl;
    cout << "x%y = " << x%y << endl;

    cout << "\n *****B. ++ operator*******\n";
    cout << "x++ = " << x++ << endl;
    printf("x=%d, y=%d\n", x, y);
    cout << "x/y = " << x/y << endl;
    cout << "x%y = " << x%y << endl;

    cout << "++x = " << ++x << endl;
    printf("x=%d, y=%d\n", x, y);

    cout << "\n *****C. Float Type*******\n";
    cout << "f1+f2 = " << f1+f2 << endl;
    printf("f1+f2 = %.2f\n", f1+f2);
    cout << "f1-f2 = " << f1-f2 << endl;
    cout << "f1*f2 = " << f1*f2 << endl;
    cout << "f1/f2 = " << f1/f2 << endl;

    cout << "\n *****D. Character Type*******\n";
    cout << "the integer value of char " << c1 << " = " << int(c1) << endl;
    cout << "the integer value of char " << c2 << " = " << int(c2) << endl;

    cout << "\n *****E. String Type*******\n";
    cout << "7+3 = " << s1+s2 << endl;

    cout << "\n *****F. bool type*******\n";
    cout << "flag= " << flag << endl << endl;

    return 0;
}
