//write a function to sort an array and display its contents in ascending order and descending order
#include<stdio.h>
#define N 9
int sort(int a[]);
void main(void)
{
    int i,a[N];
    printf("Enter the array\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("Array is \n");
    for(i=0;i<N;i++)
        printf("%d",a[i]);
        printf("\n");
        sort(a);
}
int sort(int a[])
{
    int i,temp1=0,temp2=0,s=0,index=0,d=1;
    while(index<N)
    {
        for(i=d;i<N;i++)
    {
        if(a[i]<a[s])
        {
           temp1=a[i];
           a[i]=a[s];
           a[s]=temp1;
        }
    }
    s++;
    d++;
    index++;
    }
    printf("Array in increasing order is \n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
        printf("\nArray in decreasing order is \n");
    for(i=N-1;i>=0;i--)
        printf("%d ",a[i]);
}

