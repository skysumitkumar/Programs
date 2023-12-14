#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    printf("%d\n",func(3,8));
    return 0;
}
int func(int a,int b)
{
    if(a>b)
        return 1000;
    return a+func(a+1,b);
}
