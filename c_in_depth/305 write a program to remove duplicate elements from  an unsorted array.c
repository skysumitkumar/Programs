//write a program to remove duplicate elements from  an unsorted array
#include<stdio.h>
#define N 9
int RemoveDuplicate(int a[]);
int main()
{
    int i,a[N];
    printf("Enter the array\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("Array is \n");
    for(i=0;i<N;i++)
        printf("%d",a[i]);
        printf("\n");
    RemoveDuplicate(a);
}
int RemoveDuplicate(int a[])
{
    int i,j,c,s,count=0;
    for(i=0;i<N-count;i++)
    {
        for(j=i+1;j<N-count;j++)
        {
            if(a[i]==a[j])
            {
                s=j;
                c=N-count-1;
                count=count+1;
                while(s!=c)
                {
                    a[s]=a[s+1];
                    s++;
                }
            }
        }
    }
    printf("The new array is \n");
    for(i=0;i<N-count;i++)
        printf("%d ",a[i]);
}
