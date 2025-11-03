// **********************************************
// COSC 501 LAB #2
// Brendan Lauterborn
// PROGRAM-NAME: Lab2_2
// A simple description of the program
//***********************************************
#include <iostream>
using namespace std;
int main() {

 int const password = 1123;
 int input = 0;


 while (input != password) {
    
    cout << "Enter the password (or -1 to exit): ";
    cin >> input;

    if (input == -1){
        printf("You exit the program");
        break;
    }
    else if (input == password) {
        printf("Password is correct");
        break;
    }
    else {
        printf("Password is incorrect\n");
    }


 }
    return 0;

}