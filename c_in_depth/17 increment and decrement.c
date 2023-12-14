#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10;
    a=a++;
    a=a++*a--;
    printf("%d\n",a);
    printf("%d\n",a++*a++);
    return 0;
}
