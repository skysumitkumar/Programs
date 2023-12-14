//write a program to print the pascal triangle using 2d array
//do this program again i copied it this time
#include<stdio.h>
#include<conio.h>
#define R 15
#define C 15
int main()
{
    int i,j,ka[R][C];
    for(i=0;i<=R;i++)
    {
        for(j=0;j<=i;j++)
            if(j==0||i==j)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    return 0;
}
