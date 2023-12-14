//write a program to interchange first and last rows of a matrix
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define R 4
#define C 4
int InterchangeRows(int a[R][C]);
int main()
{
    int i,j,a[R][C];
    printf("Enter the array\n");
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
        scanf("%d",&a[i][j]);
    printf("Array is \n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    InterchangeRows(a);
}
int InterchangeRows(int a[R][C])
{
    int i,j,k,temp;
    for(i=0,k=R-1;i<4;i=4)
    {
        for(j=0;j<R;j++)
        {
            temp=a[i][j];
            a[i][j]=a[k][j];
            a[k][j]=temp;
        }
    }
    printf("Array is \n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
