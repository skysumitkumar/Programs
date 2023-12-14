//write a function to convert a decimal no into binary no
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int binary(int a);
int main()
{
    int i;
    printf("Enter a no to convert it in decimal to binary: ");
    scanf("%d",&i);
    binary(i);
}
int binary(int a)
{
    int i,j,rem1=0,rem2=0;
    j=a;
    while(a>0)
    {
        rem1=rem1*10+a%2;
        a=a/2;
    }
    //printf("%d",rem);
    while(rem1>0)
    {
        rem2=rem2*10+rem1%10;
        rem1=rem1/10;
    }
    printf("The binary of %d is %d",j,rem2);
}
