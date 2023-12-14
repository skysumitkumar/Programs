//Array Program to input value into an array and display them
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    //int age[5]={1,2,3,4,5,6,7,8,9};
    int age[5],i;
    for(i=0;i<5;i++)
    {
        printf("The value of array age[%d] is: ",i);
        scanf("%d",&age[i]);
    }
    printf("The array elements are: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",age[i]);
    }

}
