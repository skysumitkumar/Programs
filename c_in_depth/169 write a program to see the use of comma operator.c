//write a program to see the use of static variable
//static variable will update the value of the m every time
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func(int k);
int main(void)
{
    int i=0,k=3;
    i+=func(k);
    i+=func(k);
    i+=func(k);
    printf("%d\n",i);
    return 0;
}
int func(int k)
{
    static int m=2;
    m=m+k;
    return m;
}





