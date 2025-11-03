// **********************************************
// COSC 501 LAB #7
// Brendan Lauterborn
// PROGRAM-NAME: Lab7_2
// A simple description of the program
//***********************************************
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void assign_arr(int numbers[],int size);
int get_rand(int max, int min);
void print_list(int num_list[],int nList);
void rev_arr(int numbers[], int size);
int get_max(int numbers[], int size);
int get_min(int numbers[], int size);

main(){
    srand(time(0));
    const int size = 20;
    int numbers[size] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    assign_arr(numbers, size);

    print_list(numbers, size);
    rev_arr(numbers, size);
    printf("Max value of the array: %d", get_max(numbers, size));
    printf("\nMin value of the array: %d", get_min(numbers, size));



}

int get_rand(int max, int min){
    int range = max - min + 1;
    int num = min + rand()%range;
    return num;
}
 
void assign_arr(int numbers[],int size){
    for(int i = 0; i < size; i++){
        int value = get_rand(100, 0);
        numbers[i] = value;
    }
    
}
void print_list(int num_list[],int nList){
    cout << "Random array: [";
    for (int i = 0; i < nList; i++){
        printf("%d " ,num_list[i]);
    }
    cout << "]\n";
}

void rev_arr(int numbers[], int size){
    cout << "Random array in reverse order: [";
    for(int i = size - 1; i >= 0; i--){
        printf("%d ", numbers[i]);
    }
    cout << "]\n";

}
int get_max(int numbers[], int size){
    int max = numbers[0];
    for (int i = 0; i < size; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;

}
int get_min(int numbers[], int size){
    int min = numbers[0];
    for (int i = 0; i < size; i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;
}
