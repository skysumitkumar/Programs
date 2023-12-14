
//write a program to print the  multiply and sum of the no's
// Error Formal parameter ko redefine nahi kar sakte
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int x,int y);
int main(void)
{
    int p=func(5,6);
    printf("%d",p);
    return 0;
}
int func(int x,int y)      // formal parameter
{
    int x=2;                // yha formal parameter ko redefine nahi kar sakte
    return x*y;
}





