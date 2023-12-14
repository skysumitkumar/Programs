//write a program to find out the sum of this series.
//x-x3/3!+x5/5!-x7/7!+x9/9!.........x(2*n-1)/(2*n-1)!
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long int series(int);
long int main(void)
{
    int n;
    printf("Enter the no of terms that you want to print: ");
    scanf("%d",&n);
    series(n);
}
long int series(int n)
{
    int i,j,result=1,x=2,dem=1,a;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("-");
        else
            printf("+");
        for(j=1;j<=2*i-1;j++)
        result=result*x;
        for(j=1;j<=2*i-1;j++)
        dem=dem*j;
        printf("%d/%d",result,dem);
        result=1;
        dem=1;
    }
}
