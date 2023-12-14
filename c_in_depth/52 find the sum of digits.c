#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,sum=0;
    printf("Enter a no=");
    scanf("%d",&n);
    do
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }while(n>0);
    printf("%d",sum);
}
