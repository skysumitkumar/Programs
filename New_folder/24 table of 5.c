void main()
{
    int i,n;
    //clrscr();
    printf("Enter a value:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("\n %d*%2d=%d",n,i,n*i);//if we write %2d it left space on left side and when we write %-2d than it left space on right side
        i=i+1;

    }
    getch();

}
