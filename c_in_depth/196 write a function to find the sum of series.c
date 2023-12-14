//write a function to find the sum of series
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
float sumseries(int n);
float main(void)
{
    int n;
    printf("Enter the no of terms to sum: ");
    scanf("%d",&n);
    printf("%f",sumseries(n));
}

float sumseries(int n)
{
    int i;
    float sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/(i*i));
    }
    return sum;

}
