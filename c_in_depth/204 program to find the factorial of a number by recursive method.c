//program to find the factorial of a number by recursive method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long int factorial(int n);
long int Ifactorial(int n);
long int main(void)
{
    int n;
    printf("Enter the no that you find the factorial: ");
    scanf("%d",&n);
    if(n<0)
        printf("No factorial for negative no");
    else
        printf("factorial of %d is: %ld\n",n,factorial(n));
    if(n<0)
        printf("No factorial for negative no");
    else
        printf("factorial of %d is: %ld\n",n,Ifactorial(n));
}
long int factorial(int n)
{
    if(n==0)
        return 1;
    return(n*factorial(n-1));
}
long int Ifactorial(int n)
{
    long int product=1;
    while(n>0)
    {
        product*=n;
        n--;
    }
    return product;
}
