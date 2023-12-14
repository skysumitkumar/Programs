//write a program to find the element in the matrix , where the row and column of the matrix is sorted
#include<stdio.h>
#include<stdlib.h>
#define R 4
#define C 4
int FindElement(int a[R][C],int n);
int main()
{
    int i,j,a[R][C],n;
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
    printf("\nEnter the no that you want to search ");
    scanf("%d",&n);
    FindElement(a,n);
    //result=
    /*if(FindElement(a,n)==0)
    printf("This element is not in this matrix");
    else
        FindElement(a,n);*/

}
int FindElement(int a[R][C],int n)
{
    int i,j,x;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            x=a[i][j];
            if(x==n)
            {
                printf("The %d is in %d%d index of this matrix",n,i,j);
                return 1;
            }
        }
    }
    return 0;
}
