#include<stdio.h>
void func(int x,int *y);
int main(void)
{
    int a=2,b=6;
    func(a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void func(int x,int *y)
{
    int temp;
    temp=x;
    x=*y;       //Here value of x is 6 but it cant change the value of a
    printf("%d",x);
    *y=temp;
}
