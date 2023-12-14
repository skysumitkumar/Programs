//Rewrite the function func() using a single return statement
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int abs(int n);
int func(int n,int b);
int main(void)
{
    int n,b;
    printf("Enter a number : ");
    scanf("%d",&n);
    scanf("%d",&b);
    printf("%d ",abs(n));
    printf("%d ",func(n,b));
    return 0;
}
int abs(int a)
{
    if(a<0)
        a-=a;
    return a;
}
int func(int a,int b)
{
    a=a-b;
    if(a!=0)
        a++;
    return a;
}
/*int abs(int a)
{
    if(a<0)
        return a;
    else
        return a;
}
{
    a=a-b;
    if(a!0)
    {
        a++;
        return a;
    }
    else
        return 0;
}*/

