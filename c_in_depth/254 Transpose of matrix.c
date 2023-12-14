//Transpose of matrix
#include<stdio.h>
#define R1 4
#define C1 3
void main(void)
{
    int i,j,a[R1][C1];
    printf("Enter the matrix: \n");
    for(i=0;i<R1;i++)
        for(j=0;j<C1;j++)
        scanf("%d",&a[i][j]);
        printf("\nThe transpose of this  matrix is \n");
    for(i=0;i<C1;i++)
    {
        for(j=0;j<R1;j++)
        {
        printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

}
