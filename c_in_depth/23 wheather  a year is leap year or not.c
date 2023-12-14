#include<stdio.h>
#include<conio.h>
void main()
{
    int y;
    scanf("%d",&y);
    if(y%400==0||y%4==0)
        printf("it is leap year");
    else
        printf("it is not a leap year");


}
