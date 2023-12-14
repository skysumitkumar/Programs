//write a program to see the use of static variable
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int n);
int main(void)
{
    printf("%d ",func(2));
    printf("%d ",func(5));
    printf("%d ",func(2));
    return 0;
}
int func(int n)
{
    static int s=0;
    int i;
    for(i=1;i<=n;i++)
        s+=i;
    return s;
}



