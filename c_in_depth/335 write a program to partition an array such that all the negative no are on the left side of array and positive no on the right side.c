//write a program to partition an array such that all the negative no are on the left side of array and positive no on the right side
#include<stdio.h>
#define N 10
int ParititionArray(int a[]);
int main()
{
    int i,a[N];
    printf("Enter the array\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("Array is \n");
    for(i=0;i<N;i++)
        printf("%d\t",a[i]);
        printf("\n");
        ParititionArray(a);
}
int ParititionArray(int a[])
{
    int i,j,temp,b,small=0;
    for(i=0;i<N-1;i++)
    {
        small=a[i];
        for(j=i+1;j<N;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                temp=small;
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Arranged Array is \n");
    for(i=0;i<N;i++)
        printf("%d\t",a[i]);
        printf("\n");
}
