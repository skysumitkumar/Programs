//program to find the divisibility by 9 and 11
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int divisible9(int);
//int divisible11(int);
void main(void)
{
    int n;
    printf("Enter the no to check the divisibility of 9 and 11: ");
    scanf("%d",&n);
    printf("The no you entered is : ");
    divisible9(n);
    printf("The no you entered is : ");
    divisible11(n);
}
int divisible9(int n)
{
    int sum=0;
    if(n==9)
        return printf("This is divisible by 9\n");
    if(n<9)
        return printf("This is not divisible by 9\n");
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    return(divisible9(sum));
}
int divisible11(int n)
{
    int sum1=0,sum2=0;
    if(n==0)
        return printf("This is dibisible by 11\n");
        if(n<=10)
            return printf("This is not divisible by 11\n");
    while(n>0)
    {
        sum1+=n%10;
        n=n/10;
        sum2+=n%10;
        n=n/10;
    }
    if(sum1>sum2)
        return(divisible11(sum1-sum2));
    else
        return(divisible11(sum2-sum1));
}

