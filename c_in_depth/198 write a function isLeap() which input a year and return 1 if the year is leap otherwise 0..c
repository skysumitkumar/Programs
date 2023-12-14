//write a function isLeap() which inputs a ear and returns 1 if the year is leap otherwise 0.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int isLeap(int a);
int main(void)
{
    int n;
    printf("Enter the year: ");
    scanf("%d",&n);
    printf("%d",isLeap(n));
}
int isLeap(int a)
{
    if(a%4==0||a%400==0)
        return 1;
    return 0;
}
