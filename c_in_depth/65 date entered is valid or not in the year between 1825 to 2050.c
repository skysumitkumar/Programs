#include<stdio.h>
#include<conio.h>
/*void main()
{
    int dd,mm,yy;
    printf("Enter a date in dd/mm/yy");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if(yy>=1850&&yy<=2050)
    {
        if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
           {
           if(dd>=1&&dd<=31)
                printf("valid date");
           else
                printf("invalid date");

        }
        else if(mm==4||mm==6||mm==9||mm==11)
        {
            if(dd>=1&&dd<=30)
                printf("valid date");
            else
                printf("invalid date");
        }
        else if(mm==2)
        {
            if(dd=29)
            {
                if(yy%100==0||yy%400==0||yy%4==0)
                    printf("valid date");
                else
                    printf("invalid date");
            }
            else if(dd=28)
            {
                printf("valid date");
            }
            else
                printf("invalid date");
        }
        else
            printf("invalid date");

    }
    else
        printf("invalid date");
}*/
void main()
{
    int dd,mm,yy,val;
    printf("Enter a date in dd/mm/yy");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if(yy>=1850&&yy<=2050)
    {
        if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
           {
           if(dd>=1&&dd<=31)
                val=1;
        }
        else if(mm==4||mm==6||mm==9||mm==11)
        {
            if(dd>=1&&dd<=30)
                val=1;
        }
        else if(mm==2)
        {
            if(dd=29)
            {
                if(yy%100==0||yy%400==0||yy%4==0)
                    val=1;
            }
            else if(dd=28)
                val=1;
        }
    }
    if(val==1)
        printf("valid date");
    else
        printf("invalid date");
}


