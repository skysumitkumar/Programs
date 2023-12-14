//write a program to find out the sum of series,by both iterative and recursive methods
//recheck it if it give wrong output but in  my side i thing it give right output
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long int fact(int);
float series(int ,int );
void main(void)
{
    int x,n,fac;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The formula of sum of the series is x(2n-1)/(2n-1)! and sum of this is: %ld",series(x,n));
}
long int fact(int n)
{
    if(n==1)
        return 1;
    return(n*fact(n-1));
}
float series(int x,int n)
{
    int i,sum=1,fac=1;
    static int j=1;
    static float result=0;
    if(j>n)
        return result;
    i=2*j-1;
    j++;
    fac=fact(i);
    for(i;i>0;i--)
        sum=sum*x;
    if(j%2==0)
        result=result+(sum/fac);
    else
        result=result-(sum/fac);
    return(series(x,n));
}

