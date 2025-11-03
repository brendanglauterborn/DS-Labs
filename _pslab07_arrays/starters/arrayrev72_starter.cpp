//==========================================================
// arrayrev.cpp
//==========================================================
#include <iostream>
#include <cstdlib>
#include <random>
#include <time.h>
using namespace std;
void printMin(int a[], int asize);
int genRand(int min, int max);

int main() {
    int nRANDS = 20;
    int arr[nRANDS];

    //seed to create diff seq of random nums on each run
    srand(time(0));  //current time as seed

    for (int i = 0; i < nRANDS; i++)
        arr[i] = genRand(0,100);

    printMin(arr, nRANDS);
    printMax(arr, nRANDS);
    printArr(arr, nRANDS);
    printRev(arr, nRANDS);
    printf("\n\n");
    return(0);
}

void printMin(int a[], int asize) { //complete
    int amin = a[0];
    for (int i = 0; i < asize; i++) {
        if (a[i] < amin)
            amin =  a[i];
    }
    printf("\n\tamin: %d", amin);
}

int genRand(int min, int max) { //fill-in to complete
    int range, random;
    range = 
    random = 
    return random;
}
