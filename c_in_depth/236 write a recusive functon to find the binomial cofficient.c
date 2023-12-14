//write a recursive function to find the binomial coefficient
//problem on result
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int BinoCoff(int,int);
int n,r,num=1,demo=1,res;
void main(void)
{
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    printf("The value of binomial coefficient is: ");
    printf("%d",BinoCoff(n,r));
}
int BinoCoff(int n,int r)
{
    static int nu=1,de=1;
    int result;
    if(r==0)
        return nu/de;
        nu=nu*n;
        de=de*r;
    return(BinoCoff(n-1,r-1));
}
