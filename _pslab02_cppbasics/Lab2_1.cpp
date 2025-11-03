// **********************************************
// COSC 501 LAB #2
// Brendan Lauterborn
// PROGRAM-NAME: Lab2_1
// A simple description of the program
//***********************************************
#include <iostream>
using namespace std;
int main() {

int input;
cout << "Enter an integer: ";
cin >> input;

if (input < 0 ) {
    if (input % 2 == 0) {
        printf("\n %d is Negative and Even", input);
    }
    else {
        printf("\n %d is Negative and Odd", input);
    }
}
else if (input >= 0) {
    if (input % 2 == 0) {
        printf("\n %d is Positive and Even", input);
    }
    else {
        printf("\n %d is Positive and Odd", input);
    }
}
else {
    printf("Invalid");
}
    return 0;
}