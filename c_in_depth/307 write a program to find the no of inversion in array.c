//write a program to find the no of inversion in array eg:- array is 4,9,2,8,7 then there is 5 inversions a[i]>a[j] and i<j formed by the following pairs is (4,2),(9,2),(9,8),(9,7),(8,7)
#include<stdio.h>
#define N 5
int FindInversion(int a[]);
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
        count=FindInversion(a);
        printf("%d",count);
}
int FindInversion(int a[])
{
    int i,j,count=0;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j]&&i<j)
            {
               printf("%d\t%d\n",a[i],a[j]);
               count+=1;
            }

        }
    }
    return count;
}
