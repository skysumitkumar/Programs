//write a function printDayofWeek() to print day of the week for a given date use function isValid(), isLeap(),and findJulian()
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int printDayofWeek(int d,int m,int y);
int isValid(int d,int m,int y);
int findJulian(int d,int m,int y);
int main(void)
{
    int d,m,y;
    printf("Enter the date: ");
    scanf("%d/%d/%d",&d,&m,&y);
    printDayofWeek(d,m,y);
}
int printDayofWeek(int d,int m,int y)
{
    int j,day,f,h,fh;
    j=findJulian(d,m,y);
    f=(y-1)/4;
    h=(y-1)/100;
    fh=(y-1)/400;
    day=(y+j+f-h+fh)%7;
    switch(day)
    {
        case 0: printf("saturday\n");break;
        case 1: printf("sunday\n");break;
        case 2: printf("monday\n");break;
        case 3: printf("tuesday\n");break;
        case 4: printf("wednesday\n");break;
        case 5: printf("thursday\n");break;
        case 6: printf("friday\n");break;

    }
}
int findJulian(int d,int m,int y)
{
    int j;
    if(isValid(d,m,y))
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
int isValid(int d,int m,int y)
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



