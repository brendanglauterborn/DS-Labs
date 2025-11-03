// **********************************************
// COSC 501 LAB #3
// Brendan Lauterborn
// PROGRAM-NAME: Lab3_2
// A simple description of the program
//***********************************************

#include <iostream>
#include <string>
using namespace std;

int main() {

    int num_toothpicks = 23;
    int user_choice, cpu_choice;


    while (num_toothpicks >= 1){
        printf("Player (%d toothpicks left): ", num_toothpicks);
        cin >> user_choice;
        while(user_choice < 1 || user_choice > 4){
            printf("Invalid\n");
            printf("Player (%d toothpicks left): ", num_toothpicks);
            cin >> user_choice;
        }
        num_toothpicks -= user_choice;

        if (num_toothpicks > 4){
            cpu_choice = 4 - user_choice;
            num_toothpicks -= cpu_choice;
            printf("Computer: %d\n", cpu_choice);
        }
        else if (num_toothpicks <= 4 && num_toothpicks >= 2){
            cpu_choice = num_toothpicks - 1;
            num_toothpicks -= cpu_choice;
            printf("Computer: %d\n", cpu_choice);
            if(num_toothpicks == 1){
                printf("Player (%d toothpicks left): ", num_toothpicks);
                cin >> user_choice;
                printf("Cpu wins!");
            }
            break;
        }
        else {
            printf("User wins!");
            break;
        }
        
        
    }




    return 0;
}
