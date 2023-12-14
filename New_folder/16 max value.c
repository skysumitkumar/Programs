
void main()
{
    int a,b,c,d,max;
   // clrscr();
    printf("Enter 4 values=");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);//scanf me %d ke baad bhi , hoga remaimber
    if(a>b&&a>c&&a>d)
    {
        max =a;
    }
    else
    {
        if(b>c&&b>d)
        {
            max=b;
        }
        else
        {
            if(c>d)
            {
                 max =c;
            }
            else
            {
                 max=d;
            }

        }
    }
    printf("max value=%d",max);
    getch();
}
