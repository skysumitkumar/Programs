//function with arguments and return value
//program to find the sum of digits of any number
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int sum(int n);
int main(void)
{
    int a;
    printf("Enter the no: ");
    scanf("%d",&a);
    printf("sum of digits is %d",sum(a));   // yha direct sum(a); likhne par koi output nahi aaege

}
int sum(int n)
{
    int sum=0;
    do
    {
        sum+=n%10;
        n=n/10;
    }while(n>0);
    return sum;

}
