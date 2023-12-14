//write a recursive function to find the quotient when a positive integer a is divided by positive integer b
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int RussianPeasant(int,int);
void main(void)
{
    int a,b;
    printf("Enter the first no: ");
    scanf("%d",&a);
    printf("Enter the second no: ");
    scanf("%d",&b);
    printf("The multiply of %d and %d is ",a,b);
    printf("%d",RussianPeasant(a,b));
}
int RussianPeasant(int a,int b)
{
    if(a==1)
        return b;
    if(a%2!=0)
        return(b+RussianPeasant(a/2,b*2));
    if(a%2==0)
        return(RussianPeasant(a/2,b*2));
}
