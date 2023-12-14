//write a recursive function to find the sum of all even numbers in an array
#include<stdio.h>
#define R 10
int SumEven(int a[],int index);
int main()
{
    int i,a[R],sum=0;
    printf("Enter the array\n");
    for(i=0;i<R;i++)
        scanf("%d",&a[i]);
    printf("\nprint the array\n");
    for(i=0;i<R;i++)
        printf("%d",a[i]);
        printf("\n");
    sum=SumEven(a,9);
    printf("%d",sum);
}
int SumEven(int a[],int index)
{
    int sum=0;
    if(index<0)
        return 0;
    if(a[index]%2==0)
    {
        sum=a[index];
        return(sum+SumEven(a,--index));
    }
    else
        return(SumEven(a,--index));

}
