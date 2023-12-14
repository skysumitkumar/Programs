//program to raise a floating point number to a positive integer
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long int raiseanum(long int n,float p);
void main(void)
{
    int n;
    float p;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Power is: ");
    scanf("%f",&p);
    printf("The result is: %ld",raiseanum(n,p));
}
long int raiseanum(long int n,float p)
{
    int num;
    if(p==0)
        return 1;
    num=n;
    return(n*raiseanum(n,--p));
}
