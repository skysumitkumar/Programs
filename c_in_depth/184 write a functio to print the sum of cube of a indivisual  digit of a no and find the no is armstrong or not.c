//184 write a function to print the sum of cube of a individual  digit of a no and find the no is Armstrong or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int cubesum(int n);
int printArmstrong(int n);
int isArmstrong(int n);
int main(void)
{
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("The sum of cube of %d is: %d\n ",n,cubesum(n));
    printArmstrong(n);
}
int cubesum(int n)
{
    int i,sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;
    }
    return sum;
}
int isArmstrong(int n)
{
    if(n==cubesum(n))
    return 1;
    return 0;
}
int printArmstrong(int n)
{
    if(isArmstrong(n))
        printf("it is a Armstrong no");
        else
    printf("it is not a Armstrong no");
}

