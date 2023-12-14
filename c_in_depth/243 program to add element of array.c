//program to add element of array
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    int i,a[5],sum=0;
    printf("The element of array is : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("The sum of array is: %d",sum);
}
