//write a recursive function to reverse the elements of an array
#include<stdio.h>
#define R 10
int Reverse(int a[]);
int main()
{
    int i,a[R],sum=0;
    printf("Enter the array\n");
    for(i=0;i<R;i++)
        scanf("%d",&a[i]);
    printf("\nThe array is\n");
    for(i=0;i<R;i++)
        printf("%d",a[i]);
    Reverse(a);
}
int Reverse(int a[])
{
    static int i=0,r=R-1,temp;
    if(i>r)
    {
        printf("\nThe reversed array is\n");
        for(i=0;i<R;i++)
            printf("%d",a[i]);
            return 0;
    }
    temp=a[i];
    a[i]=a[r];
    a[r]=temp;
    i++;
    r--;
    return(Reverse(a));
}
