//program that inserts an element in an array at a specified index by moving elements to the right
//20 40 50 60 30 space   after 90 in index 2            20 40 90 50 60 30
#include<stdio.h>
#include<conio.h>
int insert_at_index(int a[],int in,int n);
int main()
{
    int i,j,a[6],in,n;
    printf("Enter the array: \n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\nprint the array: \n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
        printf("\nEnter the index where you want to add no:");
        scanf("%d",&in);
        printf("\nEnter the no that you want to add:");
        scanf("%d",&n);
    insert_at_index(a,in,n);
}
int insert_at_index(int a[],int in,int n)
{
    int i;
    for(i=5;i>in;i--)           // concentrate here
    {
        a[i]=a[i-1];
    }
    a[in]=n;
    printf("\nprint the new array: \n");
    for(i=0;i<6;i++)
        printf("%d\t",a[i]);

}

