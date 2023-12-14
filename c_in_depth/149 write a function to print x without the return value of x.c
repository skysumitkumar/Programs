
//write a function to print x without the return value of x
//here it print function but here no return value for x so it print garbage value for x
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(void);
int main(void)
{
    int x=10;
    x=func();
    printf("%d\n",x);
    return 0;
}
int func(void)
{
    printf("fuction\n");
}





