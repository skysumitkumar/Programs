//Rewrite the function func() without using else and variable x
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int a,int b);
int f1(int x,int y);
int f2(int x,int y);
int main(void)
{
    int a,b;
    printf("Enter a and b ");
    scanf("%d%d",&a,&b);
    printf("%d ",func(a,b));
    return 0;
}
/*int func(int a,int b)
{
    //a==b?f1(a,b):f2(a,b);
    int x;
   if(a==b)
    x=f1(a,b);
    else
    x=f2(a,b);
    return x;
}
*/
int func(int a,int b)
{
    if(a==b)
    return f1(a,b);
    return f2(a,b);
   // or we can use this also a==b?f1(a,b):f2(a,b);
}
int f1(int x,int y)
{
    return x+y;
}
int f2(int x,int y)
{
    return x-y;
}

