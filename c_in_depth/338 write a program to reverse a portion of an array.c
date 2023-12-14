//write a program to reverse a portion of an array
#include<stdio.h>
#define R 10
int ReversePortionArray(int a[],int n);
int main()
{
    int i,n,a[R];
    printf("Enter  the array\n");
    for(i=0;i<R;i++)
        scanf("%d",&a[i]);
    printf("Array is\n");
    for(i=0;i<R;i++)
        printf("%d ",a[i]);
    printf("\nEnter the index from which you reverse the previous elements\n");
    scanf("%d",&n);
    ReversePortionArray(a,n);
}
int ReversePortionArray(int a[],int n)
{
    int i,temp,r=n;
    for(i=0;i<r/2;i++)
    {
        temp=a[n];
        a[n]=a[i];
        a[i]=temp;
        n--;
    }
    printf("\nThe new Array is\n");
    for(i=0;i<R;i++)
        printf("%d ",a[i]);
}
