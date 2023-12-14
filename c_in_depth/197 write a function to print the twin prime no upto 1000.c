//write a function to print the twin prime no upto 1000
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int twinprime(int n);
int main(void)
{
    printf("%d",twinprime(19));
}
int twinprime(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        if(i%2!=0)
        for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            printf("");
        else
        {
            i=i+2;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            printf("");
            else
            printf("%d,",i-2);
            printf("%d",i);
        }
        }
    }
    }
}
