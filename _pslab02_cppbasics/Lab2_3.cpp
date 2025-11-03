// **********************************************
// COSC 501 LAB #2
// Brendan Lauterborn
// PROGRAM-NAME: Lab2_3
// A simple description of the program
//***********************************************
#include <iostream>
using namespace std;
int main() {

char user_1;
char user_2;


    printf("User1- Please enter your selection (R, P, S): ");
    cin >> user_1;
    user_1 = tolower(user_1);
    printf("User2- Please enter your selection (R, P, S): ");
    cin >> user_2;
    user_2 = tolower(user_2);

    if ((user_1 == 'r' || user_1 == 'p' || user_1 == 's') && (user_2 == 'r' || user_2 == 'p' || user_2 == 's')) {
        if (user_1 == 'r') {
            if(user_2 == 's'){
                printf("User1 wins! Rock beats scissors!");
            }
            else if(user_2 == 'p'){
                printf("User2 wins! Paper beats rock!");
            }
            else{
                printf("Tie game!");
            }
        }
        else if(user_1 == 'p'){
            if(user_2 == 's'){
                printf("User2 wins! Scissors beats paper!");
            }
            else if(user_2 == 'r'){
                printf("User1 wins! Paper beats rock!");
            }
            else {
                printf("Tie game!");
            }
        }
        else if(user_1 == 's'){
            if(user_2 == 'p'){
                printf("User1 wins! Scissors beats paper!");
            }
            else if(user_2 == 'r'){
                printf("User2 wins! Rock beats scissors!");
            }
            else {
                printf("Tie game!");
            }
        }
    }
    else {
        printf("Invalid selection... Goodbye!");
    }

    return 0;
}