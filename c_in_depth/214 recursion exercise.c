#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
func1(int a,int b);
func2(int a,int b);
int main(void)
{
    printf("%d %d\n",func1(3,8),func2(3,8));
    return 0;
}
func1(int a,int b)
{
    if(a>b)
        return 0;
    return b+func1(a,b-1);
}
func2(int a,int b)
{
    if(a>b)
        return 0;
    return a+func2(a+1,b);
}
