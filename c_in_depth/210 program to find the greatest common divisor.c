//program to find the greatest common divisor
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int commondivisor(int,int);
void main(void)
{
    int a,b;
    printf("Enter the 1st no: ");
    scanf("%d",&a);
    printf("Enter the 2nd no: ");
    scanf("%d",&b);
    printf("%d",commondivisor(a,b));
}
int commondivisor(int a,int b)
{
    if(b==0)
    return a;
    else
        return commondivisor(b,a%b);
}
