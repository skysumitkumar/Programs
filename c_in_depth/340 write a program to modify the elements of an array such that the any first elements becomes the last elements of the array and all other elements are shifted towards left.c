//write a program to modify the elements of an array such that the any first elements becomes the last elements of the array and all other elements are shifted towards left
#include<stdio.h>
#define R 9
int ModifyArray(int a[],int n);
int main()
{
    int i,n,a[R];
    printf("Enter  the array\n");
    for(i=0;i<R;i++)
        scanf("%d",&a[i]);
    printf("Array is\n");
    for(i=0;i<R;i++)
        printf("%d ",a[i]);
        printf("\nEnter the no of elements from first you want to shift at last\n");
        scanf("%d",&n);
    ModifyArray(a,n);
}
int ModifyArray(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        temp=a[0];
        for(j=1;j<R;j++)
        {
            a[j-1]=a[j];
        }
        a[j-1]=temp;
    }
    printf("\nThe new Array is\n");
    for(i=0;i<R;i++)
        printf("%d ",a[i]);
}
