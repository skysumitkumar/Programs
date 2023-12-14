
//write a program to print the  multiply and sum of the no's
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int x,int y);
int multiply(int x,int y);
int main(void)
{
    int m=6,n=3;
    printf("%d\t",multiply(m,n));
    printf("%d\t",multiply(15,4));
    printf("%d\t",multiply(m+n,m-n));
    printf("%d\t",multiply(6,sum(m,n)));
}
int multiply(int x,int y)
{
    return x*y;

}
int sum(int x,int y)
{
    return  x+y;
}




