#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    printf("%d\n",count(17243));
    return 0;
}
int count(int n)
{
    if(n==0)
        return 0;
    return 1+count(n/10);
}
