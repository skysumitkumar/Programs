void main()
{
    int n,i,j,k;
    //clrscr();
    printf("Enter a value:");
    scanf("%d",&n);
    if(n>0)
    {
        i=0;
        j=1;
        printf("\n %d%d",i,j);
        k=i+j;
        while(k<=n)
        {
            printf("%d",k);
            i=j;
            j=k;
            k=i+j;
        }
    }
    else
        printf("\n Input value should be >0");
    getch();

}
