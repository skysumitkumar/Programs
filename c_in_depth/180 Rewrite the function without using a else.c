//Rewrite the function without using a else
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int a,int b);
int main(void)
{
    int n,b;
    printf("Enter a number : ");
    scanf("%d",&n);
    scanf("%d",&b);

    printf("%d ",func(n,b));
    return 0;
}
int func(int a,int b)
{
    a=a-b;
    if(a!=2)
    {
        a++;
        return a;
    }
        a=a+b;
        printf("%d ",a);
        return b;
}
/*int func(int a,int b)
{
    a=a-b;
    if(a!=2)
    {
        a++;
        return a;
    }
    else
    {
        a=a+b;
        printf("%d ",a);
        return b;
    }
}

