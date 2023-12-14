void main()
{
    int a,b,c,d,max;
    //clrscr();
    printf("Enter 4 values:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    max=a>b&&a>c&&a>d?a:b>c&&b>d?b:c>d?c:d;
    printf("max value=%d",max);
    getch();
}
