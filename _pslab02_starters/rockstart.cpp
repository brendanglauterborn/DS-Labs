//==========================================================
//rockstart.cpp
//two users, enter R, P, S, Q (rock, paper, scissors, quit)
//result is who wins and why (or Q to quit)...
//note 'A'=65, 'a'=97
//==========================================================
#include <iostream>
#include <set>
#include <cctype>
using namespace std;

int main() {

    char  inUser1, inUser2;

    cout << "Rock, Paper, or Scissors for 2 users...\n" << endl;
    //input inUser1 and inUser2
    //cout <<...
    //cin >>...

    //convert to upper or lower case
    inUser1 = tolower(inUser1);
    inUser2 = tolower(inUser2);
    printf("inUser1=%c, inUser2=%c\n", inUser1, inUser2);


    //check if inUser1 is 'r', 'p', 's', OR 'q', if not, input is invalid...
    //check if inUser2 is 'r', 'p', 's', OR 'q', if not, input is invalid...
    //if...
    //{
        //printf("inUser1=%c, inUser2=%c invalid...\n", inUser1, inUser2);
        //exit(0);
    //}


    //check if inUser1 or inUser2 quit
    //if...
    //{
        //cout << "user quit...\n\n";
        //exit(0);
    //}

    //check for tie
    //if...
    //{
        //cout << "nobody wins...\n\n";
        //exit(0);
    //}

    //check all combinations of inUser1 and inUser2: 'r','p','s'...
    //print result and exit in each case

    cout << "zzz...\n" << endl;
    return 0;
}
