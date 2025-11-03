// **********************************************
// COSC 501 LAB #5
// Brendan Lauterborn
// PROGRAM-NAME: Lab5_2
// A simple description of the program
//***********************************************

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//int reverse_number(int num);

main(){
    int num, rev_num;
    cout << "Enter the number: ";
    cin >> num;
    while (num != 0){

        rev_num = (rev_num * 10) + (num % 10); // moves rev_num to left 1, add right right most digit  3 32 321
        num = num / 10; // removes right most digit  12 1 0

    }
    printf("Reverse the number %d",rev_num);
}