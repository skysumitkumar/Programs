//263 program to interchange adjacent no if first no is bigger than second the swap count the swap
#include<stdio.h>
int count(int a[]);
int main()
{
    int i,a[6];
    printf("Enter the  array");
    for(i=0;i<6;i++)
        scanf("%d",&a[i]);
        printf("\nEnter the  array");
    for(i=0;i<6;i++)
        printf("%d\t",a[i]);
    count(a);
}
int count(int a[])
{
    int i,j=1,temp,c=0;
    for(i=0;i<5;i++)            //here we use n-1 we if we cant use it we get +1 output there
    {
        if(a[i]>a[j])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            c++;
        }
        j++;
    }
    for(i=0;i<6;i++)
        printf("\n%d\t",a[i]);
    printf("\n%d",c);
}
