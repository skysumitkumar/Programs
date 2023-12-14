//Addition of two matrices
#include<stdio.h>
#define R 3
#define C 4
void main()
{
    int i,j,a[R][C],b[R][C],c[R][C];
    printf("Enter the first matrix: \n");
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
        scanf("%d",&a[i][j]);
    printf("Enter the second matrix: \n");
    for(i=0;i<R;i++)
        for(j=0;j<C;j++)
        scanf("%d",&b[i][j]);
    printf("print the first and second matrix: \n");
    for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
        }
    for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            printf("%d\t",b[i][j]);
            printf("\n");
        }
    printf("Addition of these two matrix is: \n");
    for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }

}
