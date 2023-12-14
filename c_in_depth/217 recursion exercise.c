#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    printf("%d\n",func(4,8));
    printf("%d\n",func(3,8));
    return 0;
}
int func(int a,int b)
{
    if(a==b)
        return a;
    return a+b+func(a+1,b-1);
}
