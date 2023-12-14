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
    //printf("%d",pyramid(r,c));
}
int pyramid(int r,int c)
{
    static int i=1;
    int n;
    n=i;
    if(n>r)
        return  printf(" ");
    for(i=1;i<=n;i++)
        printf("%d",i);
        printf("\n");
    return(pyramid(r,c));
}
