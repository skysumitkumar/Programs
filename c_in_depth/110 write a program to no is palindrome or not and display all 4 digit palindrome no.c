//write a program to no is palindrome or not and display all 4 digit palindrome no.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    long int n,rn,sn=0,no;
    printf("Enter a no: ");
    scanf("%ld",&n);
    no=n;
    while(no>0)
    {

        rn=no%10;
        sn=sn*10+rn;
        no=no/10;
    }
    if(sn==n)
        printf("it is palindrome no");
        else
            printf("it is not a palindrome no");
}
