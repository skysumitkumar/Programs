//Multiplication of two matrices
#include<stdio.h>
#define R1 3
#define C1 4
#define R2 4
#define C2 3
void main()
{
    long int i,j,k,a[R1][C1],b[R2][C2],c[C1][R2];
    if(C1!=R2)
        printf("This matrix is cant be multiply: ");
    else
    {
        printf("Enter the first matrix:\n");
        for(i=0;i<R1;i++)
            for(j=0;j<C1;j++)
            scanf("%d",&a[i][j]);
        printf("Enter the second matrix:\n");
        for(i=0;i<R2;i++)
            for(j=0;j<C2;j++)
            scanf("%d",&b[i][j]);
        printf("The first matrix is: \n");
        for(i=0;i<R1;i++)
        {
            for(j=0;j<C1;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\nThe second matrix is: \n");
        for(i=0;i<R2;i++)
        {
            for(j=0;j<C2;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<R1;i++)
            for(j=0;j<C2;j++)
            {
                c[i][j]=0;
            for(k=0;k<C1;k++)                       //Always remember this
                c[i][j]+=a[i][k]*b[k][j];           //and also this
            }
            printf("\nThe multiplication of first and second matrix is: \n");
        for(i=0;i<R1;i++)
        {
            for(j=0;j<C2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }

    }
}
