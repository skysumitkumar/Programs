//program to finds the smallest element of the array and swaps it with the 0th element of the array
#include<stdio.h>
int find_and_replace(int a[]);
int main()
{
    int i,a[10];
    printf("Enter the array: \n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("print the array: \n");
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
        printf("\nThe new array is \n");
        find_and_replace(a);
        //printf("%d",find_and_replace(a));                 //yaha agar printf ke sath print karvauga to ek extra element print ho jaaega
}
int find_and_replace(int a[])
{
    int i,j=0,temp;
        for(i=1;i<10;i++)
        {
            if(a[j]<a[i])
                printf("");
            else
                j=i;
        }
        temp=a[0];
        a[0]=a[j];
        a[j]=temp;
        for(i=0;i<10;i++)
            printf("%d\t",a[i]);
}
