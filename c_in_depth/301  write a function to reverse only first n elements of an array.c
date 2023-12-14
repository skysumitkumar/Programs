//write a function to reverse only first n elements of an array
#include<stdio.h>
#define N 9
int reverseNelements(int a[],int n);
void main(void)
{
    int i,a[N],n;
    printf("Enter the array \n");
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    printf("\nThe array is \n");
    for(i=0;i<N;i++)
    printf("%d",a[i]);
    printf("\nEnter the value of n that you want to reverse\n");
    scanf("%d",&n);
    printf("After reversing %d elements of arry is \n",n);
    reverseNelements(a,n);
}
int reverseNelements(int a[],int n)
{
    int i,temp;
    for(i=0;i<n;i++)
    {
        temp=a[n-1];
        a[n-1]=a[i];
        a[i]=temp;
        n-=1;
    }
    for(i=0;i<N;i++)
    printf("%d",a[i]);
}
