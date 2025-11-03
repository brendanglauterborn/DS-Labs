// **********************************************
// COSC 501 LAB #4
// Brendan Lauterborn
// PROGRAM-NAME: Lab4_3
// A simple description of the program
//***********************************************

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//Initializing Function
int get_rand(int min, int max);

main(){
//Get Inputs
int min, max;
cout << "Enter the min and max of two random numbers:";
cin >> min >> max;

srand(time(0));
//Print 10 random nums
printf("Generating 10 random numbers... \n");
for (int i = 0; i < 10; i++){
    int value = get_rand(min, max);
    printf("%d ", value);
}

return 0;
}

//Rand function
int get_rand(int min, int max){
    int range = max - min + 1;
    int num = min + rand()%range;
    return num;
}