//program to print a fibonacci series
//good program with recurssion practice it repeatdetly
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int fibonacci(int n);
void main(void)
{
    int n,i;
    printf("Enter the range of fibonacci series: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d ",fibonacci(i));
    printf("\n");
    return 0;
}
int fibonacci(int n)
{
    if(n==0||n==1)
        return 1;
    return(fibonacci(n-1)+fibonacci(n-2));
}
