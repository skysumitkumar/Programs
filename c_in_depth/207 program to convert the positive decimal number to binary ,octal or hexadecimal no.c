//program to convert the positive decimal number to binary ,octal or hexadecimal no
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long int convertanum(long int n,int b);
void main(void)
{
    int n,b;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Enter the base value that you want to convert: ");
    scanf("%d",&b);
    printf("The result of conversion is: ");
    convertanum(n,b);
}
long int convertanum(long int n,int b)
{
    int rem=0;
    if(n/b==0)
    {
        printf("%d",n);         //remember this step
        return;
    }
    rem=n%b;
    convertanum(n/b,b);
    if(n<10)
        printf("%d",rem);
    else
        printf("%c",rem-10+'A');    //remember this step also it main part of alphabatical result

}
