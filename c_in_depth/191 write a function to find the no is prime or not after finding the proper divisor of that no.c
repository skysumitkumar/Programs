//write a function to find the no is prime or not after finding the proper divisor of that no
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int sumprdivisors(int n);
int isprime(int n);
int main(void)
{
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("The sum of proper divisor of %d is %d and if it is prime print 1 else print 0: ",n,sumprdivisors(n),isprime(n));
}
int sumprdivisors(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    return sum;
}
int isprime(int n)
{
    int i,a;
    a=sumprdivisors(n);
    for(i=1;i<=sqrt(a);i++)
        if(a%1==0)
            return 0;
        return 1;
}
