//==========================================================
//swap.cpp
//when swapping variable values, think rotating values
//==========================================================
#include <stdio.h>
using namespace std;
int square(int x);
void swap(int &a, int &b);

int main() {
    int x = 5;
    int y = 10;
    printf("\n\tinitial values: x=%d, y=%d\n",x,y);

    y = square(x);
    printf("\n\tpost y=square(x): x=%d, y=%d\n",x,y);

    swap(x,y);
    printf("\n\tpost swap(x,y): x=%d, y=%d\n\n",x,y);
    return (0);
}

int square(int x) {
    int result;
    result = x * x;
    return (result);
}

void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
