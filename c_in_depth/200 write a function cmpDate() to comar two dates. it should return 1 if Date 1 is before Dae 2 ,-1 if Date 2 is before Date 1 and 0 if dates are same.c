//write a function cmpDate() to compare two dates. it should return 1 if Date 1 is before Date 2 ,-1 if Date 2 is before Date 1 and 0 if dates are same
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int cmpDate(int d1,int m1,int y1,int d2,int m2,int y2);
int date1(int d1,int m1,int y1);
int date2(int d2,int m2,int y2);
int main(void)
{
    int d1,m1,y1,d2,m2,y2;
    printf("Enter the first date:");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter the second date:");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    printf("%d",cmpDate(d1,m1,y1,d2,m2,y2));
}
int date1(int d1,int m1,int y1)
{
    if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
    {
        if(d1>=1&&d1<=31)
            return 1;
        return 0;
    }
    else if(m1==2)
    {
        if(y1%4==0||y1%400==0)
        {
            if(d1>=1&&d1<=29)
                return 1;
        return 0;
        }
        else
        {
            if(d1>=1&&d1<=28)
                return 1;
        return 0;
        }

    }
    else if(m1==4||m1==6||m1==9||m1==11)
    {
        if(d1>=1&&d1<=30)
            return 1;
        return 0;
    }
}
int date2(int d2,int m2,int y2)
{
    if(m2==1||m2==3||m2==5||m2==7||m2==8||m2==10||m2==12)
    {
        if(d2>=1&&d2<=31)
            return 1;
        return 0;
    }
    else if(m2==2)
    {
        if(y2%4==0||y2%400==0)
        {
            if(d2>=1&&d2<=29)
                return 1;
        return 0;
        }
        else
        {
            if(d2>=1&&d2<=28)
                return 1;
        return 0;
        }
    }
    else if(m2==4||m2==6||m2==9||m2==11)
    {
        if(d2>=1&&d2<=30)
            return 1;
        return 0;
    }
}
int cmpDate(int d1,int m1,int y1,int d2,int m2,int y2)
{
    int sum,sum1=0,sum2=0;
    sum1=d1+m1+y1;
    sum2=d2+m2+y2;
    sum=sum2-sum1;
    if(date1(d1,m1,y1)&&date2(d2,m2,y2))
    {
        if(sum<0)
            return -1;
        else if(sum>0)
            return 1;
        else
            return 0;
    }
    else
        printf("Invalid date.");
}
