
//write a program to print the sum
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(int a,int b);
int main(void)
{
    int i=5,j=10;
    func(i/2,j%3);
    return 0;
}
void func(int a,int b)
{
    a/=2;
    b--;
    printf("%d\t",a+b);
}




