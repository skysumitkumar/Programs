//write a program to check whether all the elements of an array are distinct
#include<stdio.h>
#define N 9
int checkSame(int a[]);
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
        if(checkSame(a))
            printf("All the elements are distinct");
        else
            printf("Some elements are same");
}
int checkSame(int a[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]==a[j])
            return 0;
        }
    }
    return 1;
}
