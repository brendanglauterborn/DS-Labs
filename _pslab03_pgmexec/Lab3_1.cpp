// **********************************************
// COSC 501 LAB #2
// Brendan Lauterborn
// PROGRAM-NAME: Lab3_1
// A simple description of the program
//***********************************************

#include <iostream>
#include <string>
using namespace std;

int main() {
    int levels = 0;
    char design = '*';

    printf("\nEnter one character for the blocks of pyramid: ");
    cin >> design;
    printf("\nEnter number of levels of pyramid: ");
    cin >> levels;

    for (int i = 0; i < levels; i++) {
        printf("\n");
        for (int j = 0; j <= i ; j++){
            printf("%c", design);
        }
    }




    return 0;
}