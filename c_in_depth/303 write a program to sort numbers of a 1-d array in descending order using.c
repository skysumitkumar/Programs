//write a program to sort numbers of a 1-d array in descending order using
//i) selection sort ii) bubble sort iii) insertion sort
#include<stdio.h>
#define N 9
int selectionSort(int a[]);
int bubbleSort(int a[]);
int inserctionSort(int a[]);
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
        selectionSort(a);
        printf("\n");
        bubbleSort(a);
        printf("\n");
        inserctionSort(a);
}
int selectionSort(int a[])
{
    int i,temp1=0,temp2=0,s=0,index=0,d=1,j,small;
    for(i=0;i<N-1;i++)                        //Remember this point also it n-1 always
    {
        small=a[i];
        for(j=i+1;j<N;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                s=j;
            }
        }
        if(i!=s)
        {
           temp1=a[s];
            a[s]=a[i];
            a[i]=temp1;
        }
    }
        printf("\nArray in decreasing order with selection short is \n");
    for(i=N-1;i>=0;i--)
        printf("%d ",a[i]);
}
int bubbleSort(int a[])
{
    int i,j,temp;
    for(i=0;i<N;i++)
    {
        if(a[i]>a[i+1])
        {
            j=i;
            while(j>=0)
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nArray in decreasing order with bubble short is \n");
    for(i=N-1;i>=0;i--)
        printf("%d ",a[i]);
}
int inserctionSort(int a[])
{
    int i,j,s,small;
    for(i=0;i<N-1;i++)
    {
        small=a[i];
        for(j=i+1;j<N;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                s=j;
            }
        }
        while(s>0)
        {
            a[s]=a[s-1];
            s--;
        }
        a[i]=small;
    }
    printf("\nArray in decreasing order with inserction short is \n");
    for(i=N-1;i>=0;i--)
        printf("%d ",a[i]);
}
