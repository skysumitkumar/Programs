//write a recursive function to print these pyramids of numbers.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int pyramid(int,int);
void main(void)
{
    int r,c;
    printf("Enter the no of rows: ");
    scanf("%d",&r);
    printf("Enter the no of colums: ");
    scanf("%d",&c);
    printf("The pyramid is: \n");
    pyramid(r,c);
}
int pyramid(int r,int c)
{
    int i;
    if(c==0)
        return  printf(" ");
    for(i=1;i<=c;i++)
        printf("%d",i);
        printf("\n");
    return(pyramid(r,c-1));
}

