// **********************************************
// COSC 501 LAB #3
// Brendan Lauterborn
// PROGRAM-NAME: Lab3_3
// A simple description of the program
//***********************************************

#include <iostream>
#include <string>
using namespace std;

int main() {

    int address;
    int m, c, x, i;

    for (address = 0; address <= 9999; address++){
        m = address/1000;
        c = address%1000/100;
        x = address%100/10;
        i = address%10;
        if ((m + c + x + i == 27) && ( i % 2 == 1) && (m != c && m!= x && m!= i && c != x && c != i && x != i) && (m == 3 * x)) {
            printf("The address is %d", address);
        }
    }
    
    return 0;
}