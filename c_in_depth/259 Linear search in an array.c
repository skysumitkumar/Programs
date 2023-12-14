//Linear search in an array
//This program cant call the function error in this program
#include<stdio.h>
int find(int a[10],int n);
int main()
{
    int i,a[10],n,r;
    printf("Enter the array: \n");
    for(i=0;i<9;i++)
        scanf("%d\n",&a[i]);
    printf("\nEnter the no that you want to search: ");
    scanf("%d\n",&n);
    printf("The array is: \n");
    for(i=0;i<9;i++)
            printf("%d\t",a[i]);
    r=find(a,n);
    printf("%d",r);
}
int find(int a[10],int n)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
            printf("\nThe index is :");
    }
}
