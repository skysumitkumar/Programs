//write a program to see the diff between the global and local variable
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a=5;
void func(void);
int main(void)
{
    func();
    printf("%d\n",a);
    return 0;
}
void func(void)
{
    int a=2;
    printf("%d\t",a);
}




