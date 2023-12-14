//write a program to print the  sum of two no's and and 100 on it
//Error we cant use + operand in void function
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(int x,int y);
int main(void)
{
    int x;
    x=func(5,6)+100;// here function is void so we cant use + as operand or we cant assign it to another variable
    printf("%d",x);
    return 0;
}
void func(int x,int y)
{
    int z;
    z=x+y;
}





