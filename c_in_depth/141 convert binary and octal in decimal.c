//convert binary and octal in decimal
#include<stdio.h>
#include<conio.h>
#include<math.h>
int decimal(int n);
int main()
{
    int a ;
    printf("Enter the no that you want to print: ");
    scanf("%d",&a);
    printf("%d",decimal(a));
}
int decimal(int n)
{
    int rem,d,j=1,dec=0;
    while(n>0)
    {
        rem=n%10;
        d=rem*j;
        dec=dec+d;
        j=j*2;
        n=n/10;
    }
    return dec;
}
