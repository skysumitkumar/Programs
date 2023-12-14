//write a recursive function to input and add n numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    int n;
    printf("Enter the range of sum: ");
    scanf("%d",&n);
    printf("%d",sum(n));
}
int sum(int n)
{
    if(n==0)
        return;
    return(n+sum(n-1));
}

