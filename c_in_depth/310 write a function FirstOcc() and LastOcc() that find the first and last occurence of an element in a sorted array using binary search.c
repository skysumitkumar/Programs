//write a function FirstOcc() and LastOcc() that find the first and last occurence of an element in a sorted array using binary search
#include<stdio.h>
#define N 7
int FirstOcc(int a[]);
int LastOcc(int a[]);
int main()
{
    int i,a[N],count;
    printf("Enter the array\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("Array is \n");
    for(i=0;i<N;i++)
        printf("%d",a[i]);
        printf("\n");
        FirstOcc(a);
        LastOcc(a);
}
int FirstOcc(int a[])
{
    printf("%d ",a[0]);
}
int LastOcc(int a[])
{
    printf("%d",a[N-1]);
}
