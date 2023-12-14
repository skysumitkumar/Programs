//program to ass array elements to a function
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int check(int n);
void main(void)
{
    int n[10],i;
    printf("Enter the no:  ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
        check(n[i]);
    }
    return 0;
}
int check(int n)
{
    if(n%2==0)
        printf("This is even:\n");
    else
        printf("This is odd:\n");
}
