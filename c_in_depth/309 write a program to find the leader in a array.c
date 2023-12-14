//write a program to find the leader in a array eg:-2,4,9,6,3,5,2 in it there are 4 leader 9,6,5,2 because these are greater than all the element on the right of it
//Last element of the array is always be leader
//In accending array only last element is the leader
//In decending array all element in the array are leader
#include<stdio.h>
#define N 7
int FindLeaderElements(int a[]);
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
        FindLeaderElements(a);
}
int FindLeaderElements(int a[])
{
    int i,j,count;
    for(i=0;i<N;i++)
    {
        count=0;
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
                count++;
        }
        if(count==N-i-1)
            printf("%d ",a[i]);
    }
}
