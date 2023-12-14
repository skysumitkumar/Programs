void main()
{
    int sno,cread,pread=0,nunits,t;         //1-50=1.00
    float amount;                           //51-100=1.75
    //clrscr();                               //101-150=2.75
    printf("Enter sno:");                   //151>=3.50
    scanf("%d",&sno);
    if(sno==4235)
    {
        printf("\nEnter current Reading:");
        scanf("%d",&cread);
        nunits=cread-pread;
        if(nunits>=151)
        {
            t=nunits-150;
            amount=t*3.50;
            amount=amount+50*2.75;
            amount=amount+50*1.75;
            amount=amount+50*1.00;
        }
        else if(nunits>=101&&nunits<=150)
        {
            t=nunits-100;
            amount=t*2.75;
            amount=amount+50*1.75;
            amount=amount+50*1.00;
        }
        else if(nunits>=51&&nunits<=100)
        {
            t=nunits-50;
            amount=t*1.75;
            amount=amount+50*1.00;

        }
         else
            {
            amount=nunits*1.00;
            if(amount<45)
            {
              amount=45;
            printf("\n Total Amount:%d",amount);
            }

        else
        printf("\n invalid sno");

        }

        /*else
            printf("\n invalid sno");*/
        getch();
    }
}
