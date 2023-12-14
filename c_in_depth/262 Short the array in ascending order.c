//Short the array in ascending order
#include<stdio.h>
#include<conio.h>
int ascending(int a[]);
int main()
{
    int i,a[10];
    printf("Enter the array: \n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("print the array: \n");
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    printf("The ascending order of this array is: \n");
    ascending(a);
    //printf("%d",ascending(a));                //yaha agar printf ke sath print karvauga to ek extra element print ho jaaega
}
int ascending(int a[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        j=i+1;
        for(j;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
}
