//rewrite the functions in single return statement
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int n);
int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d ",func(n));
    return 0;
}
int func(int n)
{
    if(n==39)
        n+=5;
    return n;
}
