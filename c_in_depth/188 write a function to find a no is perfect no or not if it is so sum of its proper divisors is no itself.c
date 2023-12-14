//write a function to find a no is perfect no or not if it is so sum of its proper divisors is no itself
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int perfectno(int n);
int sumdivisor(int n);
int main(void)
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    perfectno(n);
}
int perfectno(int n)
{
    if(n==sumdivisor(n))
        printf("It is a perfect no");
    else
        printf("It is not a perfect no");
}
int sumdivisor(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
     return sum;
}
