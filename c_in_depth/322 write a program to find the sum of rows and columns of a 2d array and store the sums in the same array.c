//write a program to find the sum of rows and columns of a 2d array and store the sums in the same array
//4,4 index aar sum nahi ho reha
#include<stdio.h>
#define R 5
#define C 6
int SumOfRowsAndColumns(int a[R][C]);
int main()
{
    int i,j,a[R][C];
    printf("Enter the array\n");
    for(i=0;i<R-1;i++)
        for(j=0;j<C-1;j++)
        scanf("%d",&a[i][j]);
    printf("\nThe array is\n");
    for(i=0;i<R-1;i++)
    {
        for(j=0;j<C-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    SumOfRowsAndColumns(a);
}
int SumOfRowsAndColumns(int a[R][C])
{
    int i,j,sum1,sum2,sum3;
    for(i=0;i<R-1;i++)
    {
        sum1=0;
        sum2=0;
        for(j=0;j<C-1;j++)
        {
            sum1+=a[i][j];
            if(j==4)
                continue;
                sum2+=a[j][i];
        }
        a[i][j]=sum1;
        a[j-1][i]=sum2;
        sum3+=sum2;
    }
    a[i][j]=sum3;
    printf("\nThe array and the sum of array is\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
