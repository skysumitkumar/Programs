//program of merging two sorted arrays into a third sorted array
#include<stdio.h>
#include<conio.h>
#define A 5
#define B 7
int mergeArray(int a[],int b[]);
int main()
{
    int i,j,a[A],b[B],n;
    printf("Enter the first array: \n");
    for(i=0;i<A;i++)
        scanf("%d",&a[i]);
        printf("Enter the second array: \n");
    for(i=0;i<B;i++)
        scanf("%d",&b[i]);
    printf("\nprint the first array: \n");
    for(i=0;i<A;i++)
        printf("%d\t",a[i]);
        printf("\nprint the second array: \n");
    for(i=0;i<B;i++)
        printf("%d\t",b[i]);
        printf("\nAfter merging two sorted array the new array is: \n");
        mergeArray(a,b);
}
int mergeArray(int a[],int b[])
{
    int i=0,j=0,c[A+B],d=0;
    while(i<A&&j<B)
    {
        if(a[i]<b[j])
            c[d++]=a[i++];
        else
            c[d++]=b[j++];
    }
    while(i<A)
        c[d++]=a[i++];
    while(j<B)
        c[d++]=b[j++];
    for(i=0;i<A+B;i++)
        printf("%d\t",c[i]);
}
