//rec.cpp: sum of first N natural numbers
//int res = n + nSum(n - 1); 
//n==0 base condition terminates recursion
//else: recursive case/call 
#include <iostream> 
using namespace std; 
  
int nSum(int n) { 
    if (n == 0) return 0;
  
    int x = nSum(n - 1);
    int res = n + x;
    return res; 
} 
  
int main() 
{ 
    int n = 5; 
    int recsum = nSum(n); 
    printf("n=%d, recsum=%d\n", n, recsum);
    return 0; 
}

