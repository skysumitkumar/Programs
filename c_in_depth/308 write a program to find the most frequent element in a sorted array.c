//write a program to find the most frequent element in a sorted array
#include<stdio.h>
#define N 12
int FrequentElement(int a[]);
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
        count=FrequentElement(a);
        printf("%d",count);
}
int FrequentElement(int a[])
{
    int i,j,count1,count2=1;
    for(i=0;i<N;i++)
    {
        count1=1;
        for(j=i+1;j<N;j++)
        {
            if(a[i]==a[j])
            {
                count1+=1;
                i++;
                if(count1>count2)
                {
                    count2=count1;
                }
            }
        }
    }
    return count2;
}
