//sum of series from 1 to n
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long int sumseries(int n);
long int Isumseries(int n);
void main(void)
{
    int n;
    printf("Enter the sum range: ");
    scanf("%d",&n);
    printf("the sum of no's %d is: %d \n",n,sumseries(n));
    printf("the sum of no's %d is: %d ",n,Isumseries(n));
}
long int sumseries(int n)
{
    long int sum=0;
    if(n<=1)
        return 1;
    return(n+sumseries(n-1));
}
long int Isumseries(int n)
{
    int sum=0;
    while(n>=1)
    {
        sum+=n;
        n--;
    }
    return sum;
}
