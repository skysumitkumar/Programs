//write a function prodDigits() that inputs a number and returns the product of digits of that number
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int prodDigits(int n);
int main(void)
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("The products of digit of a no is:= %d",prodDigits(n));
}
int prodDigits(int n)
{
    int prod=1;
    while(n>0)
    {
        prod*=n%10;
        n/=10;
    }
    return prod;
}
