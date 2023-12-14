//write a program to modify the elements of an array such that the first element becomes the last element of the array and all other elements are shifted towards left
#include<stdio.h>
#define R 9
int ModifyArray(int a[]);
int main()
{
    int i,n,a[R];
    printf("Enter  the array\n");
    for(i=0;i<R;i++)
        scanf("%d",&a[i]);
    printf("Array is\n");
    for(i=0;i<R;i++)
        printf("%d ",a[i]);
    ModifyArray(a);
}
int ModifyArray(int a[])
{
    int i,j,temp;
    temp=a[0];
    for(i=1;i<R;i++)
    {
        a[i-1]=a[i];
    }
    a[i-1]=temp;
    printf("\nThe new Array is\n");
    for(i=0;i<R;i++)
        printf("%d ",a[i]);
}
