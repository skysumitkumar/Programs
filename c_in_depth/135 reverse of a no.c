// write a function reverse() that inputs a number and returns the reverse of that number
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int reverse(int n);
int main(void)
{
    int a;
    printf("Enter the no: ");
    scanf("%d",&a);
    printf("The reverse of the no is: %d",reverse(a));
}
int reverse(int n)
{
    int rem=0,rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return (rev);
}
