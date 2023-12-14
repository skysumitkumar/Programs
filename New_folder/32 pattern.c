void main()
{
    int i,j,n,num;
    num=1;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
}
