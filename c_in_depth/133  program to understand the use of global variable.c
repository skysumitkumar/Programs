// program to understand the use of global variable
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void func1(void);
void func2(vod);
int a,b=6;
int main(void)
{
    printf("Inide main(): a=%d,b=%d\n",a,b);
    func1();
    fund2();
    return 0;
}
void func1(void)
{
    printf("Inside func1(): a=%d,b=%d\n",a,b);
}
void func2(void)
{
    int a=8;
    printf("Inside func2(): a=%d,b=%d\n",a,b);
}
