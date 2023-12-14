//write a program to sort the element of the matrix (i)Row wise (ii)Column wise
#include<stdio.h>
#define R 4
#define C 4
int RowShort(int a[R][C]);
int ColumnShort(int a[R][C]);
int main()
{
    int i,j,a[R][C],count;
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
    RowShort(a);
    ColumnShort(a);
}
int RowShort(int a[R][C])
{
    int i,j,k,r,c,small,temp;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            small=a[i][j];
            r=i;
            c=j;
            for(k=j+1;k<C;k++)
            {
            if(a[i][k]<small)
            {
                small=a[i][k];
                r=i;
                c=k;
            }
            }
            temp=a[r][c];
            a[r][c]=a[i][j];
            a[i][j]=temp;
        }
    }
    printf("\nThe new Row Shorted array is\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int ColumnShort(int a[R][C])
{
    int i,j,k,r,c,small,temp,b[R][C];
    for(i=0;i<C;i++)
    {
        for(j=0;j<R-1;j++)
        {
            small=a[j][i];
            r=j;
            c=i;
            for(k=j+1;k<R;k++)
            {
            if(a[k][i]<small)
            {
                small=a[k][i];
                r=k;
                c=i;
            }
            }
            temp=a[r][c];
            a[r][c]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("\nThe new Column Shorted array is\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d\t",a[i][j]);             //here it short the row shorted matrix
        }
        printf("\n");
    }
}
