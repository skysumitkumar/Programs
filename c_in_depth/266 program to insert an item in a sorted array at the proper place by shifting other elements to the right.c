//program to insert an item in a sorted array at the proper place by shifting other elements to the right
#include<stdio.h>
#include<conio.h>
int insert_at_no(int a[],int n);
int main()
{
    int i,j,a[10],n;
    printf("Enter the array: \n");
    for(i=0;i<9;i++)
        scanf("%d",&a[i]);
    printf("\nprint the array: \n");
    for(i=0;i<9;i++)
        printf("%d\t",a[i]);
        printf("\nEnter the no that you want to add: ");
        scanf("%d",&n);
    insert_at_no(a,n);
}
int insert_at_no(int a[],int n)
{
    int i;
    for(i=9;i>=0;i--)
    {
        if(a[i-1]>n)
        {
            a[i]=a[i-1];
        }
        if(a[i-1]<n)
        {
            a[i]=n;
            i=0;
        }
    }
    /*
    for(i=8;n<a[i]&&i>=0;i--)
        arr[i+1]=arr[i];
        arr[i+1]=n;

    */
    printf("The new arranged array is:\n");
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
}

