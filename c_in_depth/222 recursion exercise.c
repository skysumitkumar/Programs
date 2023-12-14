#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    printf("%d\n",func(17837));
    return 0;
}
int func(int n)
{
    return (n?n%10+func(n/10):0);
}
