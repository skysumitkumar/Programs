// write a program to accept any number n and print the cube of all numbers from 1 to n which are divisible by 3.and rewrite the program using a continue statement
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
        if(i%3!=0)
            continue;
        sn=sn+i*i*i;
    }
    printf("%d",sn);

}
