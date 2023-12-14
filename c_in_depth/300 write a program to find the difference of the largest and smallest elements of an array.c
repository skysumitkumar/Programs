//write a program to find the difference of the largest and smallest elements of an array
#include<stdio.h>
#define N 9
int diffBetweenLargeAndSmall(int a[]);
void main(void)
{
    int i,a[N],d;
    printf("Enter the array\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("Array is \n");
    for(i=0;i<N;i++)
        printf("%d",a[i]);
        printf("\n");
        d=diffBetweenLargeAndSmall(a);
        printf("The difference between largest and smallest is %d",d);
}
int diffBetweenLargeAndSmall(int a[])
{
    int i,small,large,diff;
    small=large=a[0];
    for(i=1;i<N;i++)
    {
        if(a[i]<small)
            small=a[i];
        else if(a[i]>large)
            large=a[i];
    }
    diff=large-small;
    return diff;
}
