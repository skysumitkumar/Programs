// greatest no between 3 no with conditional operator
void main()
{
    int a,b,c,greater;
    scanf("%d\n%d\n%d",&a,&b,&c);
    greater=a>b||a>c?a:b>c?b:c;
    printf("%d",greater);

}
