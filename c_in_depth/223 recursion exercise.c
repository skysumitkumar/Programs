#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    printf("%d\n",count(123212,2));
    return 0;
}
int count(long int n,int d)
{
    if(n==0)
        return 0;
    else if(n%10==d)
        return 1+count(n/10,d);
    else
        return count(n/10,d);
}
