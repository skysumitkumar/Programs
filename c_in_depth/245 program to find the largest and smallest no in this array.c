//program to find the largest and smallest no in this array
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    int a[10],large,small,i;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    large=small=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>large)
            large=a[i];
        else if(a[i]<small)
            small=a[i];
    }
    printf("The largest no is %d and the smallest no is %d",large,small);

}

