


//====================================================================
//lab92_starter.cpp
//dynamic arrays created using the new operator to emulate a vector
//functions addEntry or deleteEntry return a new allocated array
//assigned back to the dynamic array variable in your main function.
//====================================================================
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string* addEntry(string *dynArray, int &size, string entry);
string* delEntry(string *dynArray, int &size, string entry);
void printArray(string *names, int size);

int main(int argc, char *argv[]) {
    int size = 3;
    string *names = new string[size];

    names[0] = "frank";
    names[1] = "wiggum";
    names[2] = "quimby";
    printArray(names, size);
    int choice = 0;
    printf("\n1. Add a new name\n2. Remove a name\n3. Quit\n");
    cin >> choice;
    if(choice == 3){
        cout <<"Quit the Program";
    }
    while(choice !=3){
        if(choice == 1){
            string name_choice;
            cout << "\nPlease enter a new name to be added: ";
            cin >>name_choice;
            names = addEntry(names, size, name_choice);
            printArray(names, size);
        }
        else if(choice == 2){
            string del_choice;
            cout << "\nPlease enter a name to be deleted: ";
            cin >>del_choice;
            names = delEntry(names, size, del_choice);
            printArray(names, size);
        }
        else if(choice == 3){
            cout << "Quit the Program";
        }
        else{
            cout << "Invalid choice.\n";
            choice = 0;
        }
        
        printf("\n1. Add a new name\n2. Remove a name\n3. Quit\n");
        cin >> choice;

    }
    // names = addEntry(names, size, "flanders");
    // printArray(names, size);
    // names = delEntry(names, size, "wiggum");
    // printArray(names, size);
    delete [] names;
    return (0);
}

//===============================================================
//create a new dynamic array one element larger than dynArray,
//copy elements from dynArray and add entry to the new array,
//incr size, delete dynArray, and return the new dynamic array.
//===============================================================
string* addEntry(string *dynArray, int &size, string entry) {
    string* newArray = new string[size+1];
    for (int i=0; i<size; i++) {
        newArray[i] = dynArray[i];
        //printf("new[%d]=%s\n", i, newArray[i].c_str());
    }
    newArray[size] = entry;
    //printf("new[%d]=%s\n", size, newArray[size].c_str());
    size = size+1;
    delete [] dynArray;
    return newArray;
}

//===============================================================
//del entry from dynArray, return unmodified if not found
//create a new dynamic array one element smaller, decr size,
//copy all elements except entry, delete dynArray, and ret new array
//===============================================================
string* delEntry(string *dynArray, int &size, string entry) {
    int found_ndx = -1;
    for(int i = 0; i < size; i++){
        if(dynArray[i] == entry){
            found_ndx = i;
        }
        
    }
    if(found_ndx != -1){
        string* newArray = new string[size-1]; //ndx = 1
        for(int i = 0; i < found_ndx; i++){
            newArray[i] = dynArray[i];

        }
        int real = size;
        size = size - found_ndx; //6-3

        for(int i = found_ndx + 1; i < size + found_ndx ; i++){
            newArray[i-1] = dynArray[i];

        }
        size = real -1;
        //delete [] dynArray;
        return newArray;
    }
    else {
        return dynArray;
    }

    delete [] dynArray;
   // return newArray;
}

void printArray(string *names, int size) {
    printf("\nList of names: \n");
    for(int i = 0; i < size; i++){
        printf("%s \n", names[i].c_str());
    }
    printf("\n\n");
}
