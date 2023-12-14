//program to understand the use of static variables
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void func(void);
void main()
{
    func();
    func();
    func();
    return 0;
}
void func(void)
{
    int a=10;
    static int b=10;
    printf("a=%d,b=%d\n",a,b);
    a++;
    b++;
}
