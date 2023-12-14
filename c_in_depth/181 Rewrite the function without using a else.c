//Rewrite the function without using a else
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int m,int n);
int main(void)
{
    int n,b;
    printf("Enter a number : ");
    scanf("%d",&n);
    scanf("%d",&b);

    printf("%d ",func(n,b));
    return 0;
}
int func(int m,int n);
{
    if(m==5)
        return n-10;
    if(m>5)
        return n+10;
    return n;
}
/*int func(int m,int n);
{
    if(m==5)
        return n-10;
    else if(m>5)
        return n+10;
        else
        return n;
}

