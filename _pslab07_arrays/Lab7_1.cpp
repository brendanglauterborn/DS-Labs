// **********************************************
// COSC 501 LAB #7
// Brendan Lauterborn
// PROGRAM-NAME: Lab7_1
// A simple description of the program
//***********************************************
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int get_array(int numbers[], int INTS);
int print_numbers(int numbers[], int INTS);
double even_indices(int numbers[], int INTS);
double odd_indices(int numbers[], int INTS);

main(){

    const int INTS = 10;
    int numbers[INTS] = {10, 16, 21, 44, 31, 8, 74, 6, 3, 61};

    printf("Enter 10 numbers: \n");
    print_numbers(numbers, INTS);

    printf("Average of even elements: %4.2f\n", even_indices(numbers, INTS));
    printf("Average of odd elements: %4.2f\n", odd_indices(numbers, INTS));

}
    int print_numbers(int numbers[], int INTS){
        for(int i = 0; i < INTS; i++){
            printf("array[%d]: %d\n", i, numbers[i]);
        }
        return 0;
    }

    double even_indices(int numbers[], int INTS){
        double even_num = 0, even_count = 0;
        for(int i = 0; i < INTS; i++){
            if (i%2 == 0){
                even_num += numbers[i];
                even_count ++;
            }
        }
        return static_cast<double>(even_num / even_count);

    }
    double odd_indices(int numbers[], int INTS){
        double odd_num = 0, odd_count = 0;
        for(int i = 0; i < INTS; i++){
            if (i%2 != 0){
                odd_num += numbers[i];
                odd_count ++;
            }
        }
        //return double(odd_num)/odd_count;
        return static_cast<double>(odd_num / odd_count);
    }
    
 