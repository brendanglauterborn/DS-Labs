#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
void sort(int a[20], int b[20], int size);

int main() {
    int numbersArr[20]; //unique numbers added as new ones encountered
    int countsArr[20];  //counts[i]=1 when new found, counts[i]++ for repeats
    int nextNum;        //nextNum read from file
    int uniqNums=0;     //number of uniqNums in numbersArr (and assoc counts)
    bool found;
    ifstream inFile("Lab7_3input.txt"); //inFile is a file handle

    while(inFile >> nextNum) { //will read nums till eof (end-of-file)
        found = false;
        //this will only check numbersArr that were placed by us
        //once checks for exiting numbers exhausted, it will go to !found and add new
        for(int i=0; i<uniqNums; i++){ //1st pass not executed (since uniqNums=0)
            if(numbersArr[i] == nextNum){
                countsArr[i] =       //complete here
                found = true;
                break;
            }
        }
        if(!found){  //then we have a new unique number
            numbersArr[uniqNums] =      //complete 3 stmts
            countsArr[uniqNums] =
            uniqNums =
        }
        if(uniqNums >= 20){
            cout << "There are more than 20 entries.";
            break;
        }
    }

    sort(numbersArr, countsArr, uniqNums);
    
    cout << 'N' << '\t' << "Count" << endl;
    for(int i=0;i<uniqNums;i++){
        cout << numbersArr[i] << '\t' << countsArr[i] << endl;
    }
    return 0;
}

//selection sort of nums array pseudocode
void sort(int nums[], int counts[], int size){
    //move ith left boundary of unsorted array
    //for (int i=0; i < size-1; i++) {
    //    minidx = i;
    //    for (int j=i+1; j < size, j++) {
    //        compare minidx elt with jth elt
    //            if jth is min, establish new minidx
    //    }
    //    #place minidx elt in ith position
    //    swap minidx elt with ith elt
    //    swap corresponding counts
    //}
}
