
//write a program to print the  max of three no's
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int main(void)
{
    int a=2,b=8,c=3;
    printf("%d\n",max(a,max(b,c)));
    return 0;
}





