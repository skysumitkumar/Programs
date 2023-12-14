//write a program to print numbers from 1 to 80 separated by tab,8 numbers per line.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int n,j,i;
    printf("Enter the range of numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;)
    {
        for(j=1;j<=8;j++)
    {
        printf("%d",i);
        i++;

    }
    printf("\n");
    }


}
