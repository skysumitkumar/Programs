//write a program to print all prime numbers less than integer n, using
sieve of Eratosthenes.
#include<stdio.h>
#define Max 10000
int main(void)
{
    int p,i,n,a[MAX]={0};
    printf("Enter n : ");
    scanf("%d",&n);
    p=2;
    while(p*p<=n)
    {
        for(i=2;i*p<=n;i++)
            a[i*p]=1;
        for(i=p-1;i<=n;i++)
            if(a[i==0])
        {
            p=i;
            break;
        }
    }
    //print all uncrossed integers
    for(i=2;i<=n;i++)
        if(a[]==0)
        prinf("%d ",i);
    return 0;
}
