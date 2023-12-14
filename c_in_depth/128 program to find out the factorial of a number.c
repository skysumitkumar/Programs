//program to find out the factorial of a number
#include<stdio.h>
#include<conio.h>
#include<math.h>
long int fact(int a);
int main(void)
{
    int x,fac;
    printf("Enter the no: ");
    scanf("%d",&x);
    fac=fact(x);
    printf("The factorial is %d ",fac);
}
long int fact(int a)
{
    int i,n=1;
    if(a==0)
    {
        printf("The factorial of %d= ",a);
        return 1;
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            n=n*i;
        }
    }
    return n;
}
