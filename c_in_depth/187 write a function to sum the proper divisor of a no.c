//write a function to sum the proper divisor of a no
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int sumdivisors(int n);
int main(void)
{
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("sum of proper divisors of a %d is %d",n,sumdivisors(n));
}
int sumdivisors(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
     return sum;
}
