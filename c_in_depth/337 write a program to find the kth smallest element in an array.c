//write a program to find the kth smallest element in an array
#include<stdio.h>
#define R 10
int FindKthElement(int a[],int n);
int main()
{
    int i,n,a[R];
    printf("Enter  the array\n");
    for(i=0;i<R;i++)
        scanf("%d",&a[i]);
    printf("Array is");
    for(i=0;i<R;i++)
        printf("%d ",a[i]);
    printf("\nEnter the kth element that you want to find\n");
    scanf("%d",&n);
    FindKthElement(a,n);
}
int FindKthElement(int a[],int n)
{
    int i;
    for(i=0;i<R;i++)
    {
        if(i==n-1)
            printf("The %dth no is %d",n,a[i]);
    }
}
