void main()
{
    int n,rn,sd,nd;//reverse a no, sum of digit,no of digit
    //clrscr();
    printf("Enter a value:");
    scanf("%d",&n);
    rn=sd=nd=0;
    while(n>0)//when do it for negative no then while(n<0) is applied
    {
        rn=rn*10+n%10;
        sd=sd+n%10;
        nd=nd+1;
        n=n/10;
    }
    printf("\n Reverse number:%d",rn);
    printf("\n Sum of digits:%d",sd);
    printf("\n No of digits:%d",nd);
    getch();
}
