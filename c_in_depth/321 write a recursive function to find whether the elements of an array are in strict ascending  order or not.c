//write a recursive function to find whether the elements of an array are in strict ascending  order or not
#include<stdio.h>
#define R 10
int accending(int a[]);
int main()
{
    int i,a[R];
    printf("Enter the array\n");
    for(i=0;i<R;i++)
        scanf("%d",&a[i]);
    printf("\nArray is\n");
    for(i=0;i<R;i++)
        printf("%d\t",a[i]);
    if(accending(a))
        printf("\nThe array is in ascending order\n");
    else
        printf("\nThe array is not in ascending order");
}
int accending(int a[])
{
    static int i=0,j=1;
    if(i==R-1)
        return 1;
    if(a[j]<a[i])
        return 0;
    i++;
    j++;
    return(accending(a));
}
