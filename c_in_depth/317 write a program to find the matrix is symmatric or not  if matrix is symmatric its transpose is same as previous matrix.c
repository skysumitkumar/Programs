//write a program to find the matrix is symmatric or not  if matrix is symmatric its transpose is same as previous matrix
#include<stdio.h>
#include<stdlib.h>
#define R 4
#define C 4
int Symmatric(int a[R][C]);
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
    if(Symmatric(a))
        printf("It is a symmatric matrix");
    else
        printf("It is not a symmatric matrix");
}
int Symmatric(int a[R][C])
{
    int i,j,b[C][R];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    printf("The  transpose of this matrix a is \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]!=b[i][j])
                return 0;
        }
    }
    return 1;
}
