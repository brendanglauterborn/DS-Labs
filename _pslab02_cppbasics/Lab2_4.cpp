// **********************************************
// COSC 501 LAB #2
// Brendan Lauterborn
// PROGRAM-NAME: Lab2_4
// A simple description of the program
// April - June (May 30)
//***********************************************
#include <iostream>
using namespace std;
int main() {

int birth_month;
int birth_day;
printf("Please enter your birthday(month and day seperated by a space): ");
cin >> birth_month >> birth_day;

if(birth_month < 1 || birth_month > 12 || birth_day > 31 || birth_day < 1 || (birth_month == 4 && birth_day > 30 ) || (birth_month == 6 && birth_day > 30)) {
    printf("invalid Birthday... Goodbye!");
}
else{
    if(birth_month == 4){
        if(birth_day < 20){
            printf("Your horoscope sign: Aries!\n");
            if(birth_day > 18){
                printf("You are also on the cusp of being a Taurus!");
            }
        }
        else{
            printf("Your horoscope sign: Taurus!\n");
            if(birth_day < 22){
                printf("You are also on the cusp of being an Aries!");
            }
        }
    }
    else if(birth_month == 5){
        if( birth_day < 21){
            printf("Your horoscope sign: Taurus!\n");
            if(birth_day > 19){
                printf("You are also on the cusp of being a Gemini!");
            }
        }
        else{
            printf("Your horoscope sign: Gemini!\n");
            if(birth_day < 23){
                printf("You are also on the cusp of being a Taurus!");
            }
        }
    }
    else if(birth_month == 6) {
        if(birth_day < 22){
            printf("Your horoscope sign: Gemini!\n");
            if(birth_day > 20){
                printf("You are also on the cusp of being a Cancer!");
            }
        }
        else {
            printf("Your horoscope sign: Cancer!\n");
            if(birth_day < 24){
                printf("You are also on the cusp of being a Gemini!");
            }
        }
    }
    }


    return 0;
}