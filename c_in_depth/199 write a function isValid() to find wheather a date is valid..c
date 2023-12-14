//write a function isValid() to find whether a date is valid.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int isValid(int d,int m,int y);
int main(void)
{
    int d,m,y;
    printf("Enter the date: ");
    scanf("%d/%d/%d",&d,&m,&y);
    isValid(d,m,y);
}
int isValid(int d,int m,int y)
{
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d>=1&&d<=31)
        printf("It is a valid date.");
        else
        printf("It is not a valid date.");
    }
    else if(m==2)
    {
        if(y%4==0||y%400==0)
        {
            if(d>=1&&d<=29)
                printf("It is a valid date.");
        }
        else
        {
            if(d>=1&&d<=28)
                printf("It is a valid date.");
            else
                printf("It is not a valid date.");
        }
    }
    else if(m==4||m==6||m==9||m==11)
    {
        if(d>=1&&d<=30)
            printf("It is a valid date.");
        else
        printf("It is not a valid date.");
    }
}
