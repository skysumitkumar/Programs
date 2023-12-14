//write a recursive function to compute a to the power using if a is odd then a into square to the rest power or if a is even a square to the rest power
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int power(int ,int);
int main(void)
{
    int n,p;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&p);
    printf("The result of it is: ");
    printf("%d",power(n,p));
}
int power(int n,int p)
{
    if(p==1)
        return n;
    if(p%2!=0)
    {
        p--;
        p=p/2;
        return(n*power(n*n,p));
    }
    if(p%2==0)
    {
        p=p/2;
        return(power(n*n,p));
    }


}
