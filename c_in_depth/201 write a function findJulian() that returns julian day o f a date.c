//write a function findJulian() that returns julian day of a date
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int findJulian(int d,int m,int y);
int valid(int d,int m,int y);
int main(void)
{
    int d,m,y;
    printf("Enter the date : ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("The Julian day of the date is : %d",findJulian(d,m,y));
}
int findJulian(int d,int m,int y)
{
    int j;
    if(valid(d,m,y))
        {
          j=d;
          switch(m-1)
          {
              case 11: j+=30;
              case 10: j+=31;
              case 9: j+=30;
              case 8: j+=31;
              case 7: j+=31;
              case 6: j+=30;
              case 5: j+=31;
              case 4: j+=30;
              case 3: j+=31;
              case 2: j+=28;
              case 1: j+=31;
          }
          if(y%4==0 || y%400==0)
            if(m>2)
                j=j+1;
                return j;
        }

}
int valid(int d,int m,int y)
{
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d>=1&&d<=31)
            return 1;
        return 0;
    }
    else if(m==2)
    {
        if(y%4==0||y%400==0)
        {
            if(d>=1&&d<=29)
                    return 1;
            return 0;
        }
        else
        {
            if(d>=1&&d<=28)
                    return 1;
            return 0;
        }
    }
    else if(m==4||m==6||m==9||m==11)
    {
        if(d>=1&&d<=30)
                return 1;
        return 0;
    }
}
