//203 write a function to find difference of two dates. use functions isValid(),isLeap(),and findJulian(),cmpDate()
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int isValid1(int d1,int m1,int y1);
int isValid2(int d2,int m2,int y2);
int isLeap1(int y1);
int isLeap2(int y2);
int findJulian1(int d1,int m1,int y1);
int findJulian2(int d2,int m2,int y2);
int cmpDate(int d1,int m1,int y1,int d2,int m2,int y2);
int main(void)
{
    int d1,m1,y1,d2,m2,y2;
    printf("Enter the first date: ");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter the second date: ");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    printf("%d",cmpDate(d1,m1,y1,d2,m2,y2));
}
int isValid1(int d1,int m1,int y1)
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
int isValid2(int d2,int m2,int y2)
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
int isLeap1(int y1)
{
    if(y1%4==0||y1%400==0)
        return 1;
    return 0;
}
int isLeap2(int y2)
{
    if(y2%4==0||y2%400==0)
        return 1;
    return 0;
}
int findJulian1(int d1,int m1,int y1)
{
    int j;
    if(isValid1(d1,m1,y1))
        {
          j=d1;
          switch(m1-1)
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
          if(y1%4==0 || y1%400==0)
            if(m1>2)
                j=j+1;
                return j;
        }
}
int findJulian2(int d2,int m2,int y2)
{
    int j;
    if(isValid2(d2,m2,y2))
        {
          j=d2;
          switch(m2-1)
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
          if(y2%4==0 || y2%400==0)
            if(m2>2)
                j=j+1;
                return j;
        }
}
int cmpDate(int d1,int m1,int y1,int d2,int m2,int y2)
{
    if(isValid1(d1,m1,y1)&&isValid2(d2,m2,y2))
    {
            int j1,j2,j=0,i=1;
    if(y1<y2)
    {
        j2=findJulian2(d2,m2,y2);
        if(y1%4==0||y1%400==0)
        {
            j1=366-findJulian1(d1,m1,y1);
        }
        else
        {
            j1=365-findJulian1(d1,m1,y1);
        }
        j=j1+j2;
        for(y1++;y1<y2;y1++)
        {
            if(isLeap1(y1))
                j+=366;
            else
                j+=365;
        }
        return j;
    }
    else if(y2<y1)
    {
        j2=findJulian1(d1,m1,y1);
        if(y2%4==0||y2%400==0)

        {
            j1=366-findJulian2(d2,m2,y2);
        }
        else
        {
            j1=365-findJulian2(d2,m2,y2);
        }
        j=j1+j2;
        for(y2++;y2<y1;y2++)
        {
            if(isLeap2(y2))
                j+=366;
            else
                j+=365;

        }
        return j;
    }
      else if(y1==y2)
      {
          if(m1==m2)
          {
              for(d1++;d1<=d2;d1++)
              {
                 j=j+i;
              }
              return j;
          }
          else if(m1>m2)
          {
            if(y1%4==0||y1%400==0)
            {
             j1=findJulian1(d1,m1,y1);
             j2=findJulian2(d2,m2,y2);
             j=j1-j2;
            }
            else
            {
                j1=findJulian1(d1,m1,y1);
                j2=findJulian2(d2,m2,y2);
                j=j1-j2;
            }
            return j;
          }
          else if(m2>m1)
          {
            if(y2%4==0||y2%400==0)
            {
             j1=findJulian2(d2,m2,y2);
             j2=findJulian1(d1,m1,y1);
             j=j1-j2;
            }
            else
            {
                j1=findJulian2(d2,m2,y2);
                j2=findJulian1(d1,m1,y1);
                j=j1-j2;
            }
            return j;
          }
      }
    }
    else
    {
        return 0;
    }
}
