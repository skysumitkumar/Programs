//write a program to see the use of static variable
//error static keyword is not allowed in parameter declaration
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(void);
int main(void)
{
    int i;
    for(i=1;i<=6;i++)
        printf("%d ",func());
    return 0;
}
int func(void)
{
    static int k=1;
    k*=2;
    return k;
}




