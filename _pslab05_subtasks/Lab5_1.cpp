// **********************************************
// COSC 501 LAB #5
// Brendan Lauterborn
// PROGRAM-NAME: Lab5_1
// A simple description of the program
//***********************************************

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


main(){
    char c;
    cin.get(c);
    int sum = 0;

    while (c != '\n'){
        if (c <= 57 && c >= 48){
            int val = c - 48;
            sum += val;
            printf("%d ", val);
        }
        cin.get(c);

    }
    printf("\nSum of all the digits: %d", sum);
    return 0;
}