//====================================================================
// ifelse_printf.cpp
//====================================================================
#include <iostream>
using namespace std;
const int FREEZING = 32;

int main()
{
    int temp; //temp variable declared as type temp

    //========================================
    // one case
    //========================================
    temp = 32;
    printf("\nthe temperature is %d\n", temp);

    if (temp == FREEZING) {
        printf("its freezing cold\n");
    }

    temp = 55;
    printf("\nthe temperature is %d\n", temp);
    if (temp != FREEZING) printf("its not freezing cold\n");

    //========================================
    // two cases
    //========================================
    temp = 70;
    printf("\nthe temperature is %d\n", temp);

    if (temp > FREEZING) {
        printf("its warm enough to go out...\n");
    }
    else {
        printf("its too cold...\n");
    }

    //========================================
    // two cases
    //========================================
    temp = 10;
    printf("\nthe temperature is %d\n", temp);

    if (temp > FREEZING) {
        printf("its warm enough to go out...\n");
    }
    else if (temp <= 20 ) {
        printf("its really too cold...\n");
    }

    //========================================
    // 3+ cases
    //========================================
    int numCredits = 126; //declare before use
    printf("\nnumCredits= %d\n", numCredits);

    if (numCredits >=0 and numCredits < 60) {
        printf("underclassmen\n");
    }
    else if (numCredits >=60 and numCredits < 120) {
        printf("upperclassmen\n");
    }
    else if (numCredits >= 120) {
        printf("graduate\n");
    }
    else { //no credits
        printf("not enrolled...\n");
    }
	return 0;
}
