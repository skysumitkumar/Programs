//program to convert a decimal number to binary number
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    int n[10],i=0,num,j;
    printf("Enter the decimal no: ");
    scanf("%d",&num);
    while(num>0)
    {
        n[i]=num%2;
        num=num/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    printf("%d",n[j]);
}
