
//write a program to see the use of static variable
//error static keyword is not allowed in parameter declaration
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(int a,static int b);
int main(void)
{
    func(1,2);
    func(3,4);
    return 0;
}
void func(int a,static int b)
{
    a++;
    b++;
    printf("%d %d\n",a,b);
}




