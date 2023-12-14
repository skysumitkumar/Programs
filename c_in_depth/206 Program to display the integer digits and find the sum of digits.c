//Program to display the integer digits and find the sum of digits
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long int displayandsum(int n);
long int display(int n);
void main(void)
{
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("The digit of num is: %d",display(n));
    printf("digits and sum of digits of an integer is : %d ",displayandsum(n));
}
long int display(int n)
{
    if(n/10==0)
    {
        printf("%d\n",n);
        return;
    }
    display(n/10);
    printf("%d\n",n%10);
}
long int displayandsum(int n)
{
    if(n/10==0)
        return n;
    return(n%10+displayandsum(n/10));
}


