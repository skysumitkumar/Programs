#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    func1(4);
    func2(4);
    return 0;
}
void func1(int n)
{
    int i;
    if(n==0)
        return;
    for(i=1;i<=n;i++)
        printf("*");
    printf("\n");
    func1(n-1);
}
void func2(int n)
{
    int i;
    if(n==0)
        return;
    func2(n-1);
    for(i=1;i<=n;i++)
        printf("*");
    printf("\n");
}
