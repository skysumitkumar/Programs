/*void main()
{
    int i,j,n;
    printf("Enter value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }

}
*/
void main()
{
    int i,j,n;
    printf("Enter value:");
    scanf("%d",&n);
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
