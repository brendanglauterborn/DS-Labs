//random.cpp
//seed to create diff seq of random nums on each run
#include <iostream>
#include <ctime>
using namespace std;
int get_rand(int min, int max);
int rolldice();
 
int main()
{
    //random numbers in range [min..max]
    int min=1, max=6; //roll of the dice
    int range, random;
    printf("\n\n");
    srand(time(0)); //seed random generator w/ current time

    for (int i = 0; i < 20; i++)
        cout << rolldice() << " ";

    printf("\n\n");
    return 0;
}

int rolldice() {
    return (1 + rand()%6);
}

int get_rand(int min, int max) {
    //rand() returns number [0,RAND_MAX)
    return (min + rand()%(max-min+1));
}

