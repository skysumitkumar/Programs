// write program to accept any number n and print the sum of square of all numbers from 1 to n
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    int n,i,sn=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sn=sn+i*i;
    }
    printf("%d",sn);

}
