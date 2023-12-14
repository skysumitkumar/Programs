//264 program to interchange adjacent no if first no is bigger than second the swap count the swap with bubble short
#include<stdio.h>
#include<conio.h>
int count_exchanges(int a[]);
int main()
{
    int i,j,a[6];
    printf("Enter the array: \n");
    for(i=0;i<6;i++)
        scanf("%d",&a[i]);
    printf("\nprint the array: \n");
    for(i=0;i<6;i++)
        printf("%d\t",a[i]);
        printf("\n");
    count_exchanges(a);
}
int count_exchanges(int a[])
{
    int i,j,count=0,temp;
    for(i=0;i<6;i++)
    {
        for(j=0;j<5-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
            count++;
        }
    }

    }
    printf("The new array after exchange:\n");
    for(i=0;i<6;i++)
        printf("%d\t",a[i]);
        printf("\n");
        printf("%d",count);
}
