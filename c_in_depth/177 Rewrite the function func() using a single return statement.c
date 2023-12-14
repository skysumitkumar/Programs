//Rewrite the function func() using a single return statement
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int n,int b);
int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d ",func(n,0));
    return 0;
}
int func(int x,int b)
{
    if(x==5)
        b=b+2;
    else if(x>5)
        b=b+10;
    return b;
}
/*int func(int x,int b)
{
    if(x==5)
        return b+2;
    else if(x>5)
        return b+10;
    else
        return b;
}*/

