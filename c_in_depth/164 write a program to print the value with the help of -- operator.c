
//write a program to print the value with the help of -- operator
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int a,int b);
int main(void)
{
    int i=2,j=3;
    printf("%d\n",func(i,j));
    return 0;
}
int func(int a,int b)
{
    a=a-5;
    b=b+5;
    return(!a + --b);
}




