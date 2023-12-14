//program to reverse the element of an array
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    int i,j,a[10]={1,2,3,4,5,6,7,8,9,10},temp;
    for(i=0,j=9;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<10;i++)           //remember here to start from n-1 and end with 0
        printf("%d\t",a[i]);
}
