//write a program to enter a number and test whether it is a fibonacci number or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    int a,b,i,c,n;
    a=1;b=1;
    printf("Enter a no: ");
    scanf("%ld",&n);
    for(i=1;i<=10000;i++)
    {
        c=a+b;
        b=a;
        a=c;
        //printf("%d\n",c);
        if(c==n)
            printf("it is fibonacci no");
    }

}
