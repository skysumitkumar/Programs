//write a recursive function that finds the sum of all elements of an array by repeatedly partitioning it into two almost equal parts
#include<stdio.h>
#define R 10
int SumOfArray(int a[]);
int main()
{
    int i,a[R],sum=0;
    printf("Enter the array\n");
    for(i=0;i<R;i++)
        scanf("%d",&a[i]);
    printf("\nThe array is\n");
    for(i=0;i<R;i++)
        printf("%d",a[i]);
    sum=SumOfArray(a);
    printf("%d",sum);
}
int SumOfArray(int a[])
{

}
