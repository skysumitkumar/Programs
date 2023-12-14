//program that find whether a number is even or odd
#include<stdio.h>
#include<conio.h>
#include<math.h>
void evenodd(int);
void main()
{
    int x;
    printf("Enter the no: ");
    scanf("%d",&x);
    evenodd(x);
    return 0;
}
void evenodd(int n)
{
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
}

