// **********************************************
// COSC 501 LAB #9
// Brendan Lauterborn
// PROGRAM-NAME: Lab9_1
// A simple description of the program
//***********************************************


//==========================================================
//palindrome.cpp
//if isPalindrome completes and returns true => palindrome
//so isPalindrome is checking for any pair of letters to be !=, and in that case returns early
//when checking, the contents of the pointers are compared
//to check all of the letters front, back are incremented or decremented to check all pairs
//  pointers            *contents
//  front   -------->   n   *front
//                      e
//                      v
//                      e
//                      r
//                      o
//                      d
//                      d
//                      o
//                      r
//                      e
//                      v
//                      e
//   back   -------->   n   *back
//==========================================================
#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(char* cstr);

int main() {
    char s1[50] = "notapalindrome";
    char s2[50] = "neveroddoreven";
    string ispal =  "";

    printf("\n\n");
    printf("%s\n", s1);
    if (isPalindrome(s1))
        printf("is a palindrome...\n\n");
    else
        printf("is not a palindrome...\n\n");

    printf("%s\n", s2);
    if (isPalindrome(s2))
        printf("is a palindrome...\n\n");
    else
        printf("is not a palindrome...\n\n");
    printf("\n\n");
    return 0;
}

bool isPalindrome(char* cstr) {
    char* front = cstr;
    char* back = cstr + strlen(cstr)-1;
    while (front < back) {
        if(*front != *back){
            return false;
        }
        front++,back--;



        
    }
    cout << flush;
    return true;
}
