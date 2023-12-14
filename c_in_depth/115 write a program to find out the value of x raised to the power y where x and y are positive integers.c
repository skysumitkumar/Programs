// write a program to find out the value of x raised to the power y where x and y are positive integers
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    int x,y,sum=1,n;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    for(y;y>=1;y--)
    {
        n=x;
        sum=sum*n;
    }
    printf("%d",sum);
}
