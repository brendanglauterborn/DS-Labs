// **********************************************
// COSC 501 LAB #7
// Brendan Lauterborn
// PROGRAM-NAME: Lab7_3
// A simple description of the program
//***********************************************
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
    ifstream inFile("znums73.txt"); //inFile is a file handle

    while(inFile >> nextNum) { //will read nums till eof (end-of-file)
        found = false;
        //this will only check numbersArr that were placed by us
        //once checks for exiting numbers exhausted, it will go to !found and add new
        for(int i=0; i<uniqNums; i++){ //1st pass not executed (since uniqNums=0)
            if(numbersArr[i] == nextNum){
                countsArr[i] = countsArr[i] + 1;       //complete here
                found = true;
                break;
            }
        }
        if(!found){  //then we have a new unique number
            numbersArr[uniqNums] = nextNum;    //complete 3 stmts
            countsArr[uniqNums] = 1;
            uniqNums++;
        }
        if(uniqNums >= 20){
            cout << "There are more than 20 entries.";
            break;
        }
    }
    
    cout << "Before sorting:\n";
    cout << 'N' << '\t' << "Count" << endl;
    for(int i=0;i<uniqNums;i++){
        cout << numbersArr[i] << '\t' << countsArr[i] << endl;
    }

    sort(numbersArr, countsArr, uniqNums);

    cout << "After sorting:\n";
    cout << 'N' << '\t' << "Count" << endl;
    for(int i=0;i<uniqNums;i++){
        cout << numbersArr[i] << '\t' << countsArr[i] << endl;
    }
    

    
}

//selection sort of nums array
void sort(int nums[], int counts[], int size){
    for(int i = 0; i < size - 1; i++){
        int maxidx = i;
        for(int j = i + 1; j < size; j++){
            if(nums[j] > nums[maxidx]){
                maxidx = j;
            }
        
        }
        //swap
        if(maxidx != i){
            int temp = nums[i];
            nums[i] = nums[maxidx];
            nums[maxidx] = temp;

            temp = counts[i];
            counts[i] = counts[maxidx];
            counts[maxidx] = temp;
        }
    }
    
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

