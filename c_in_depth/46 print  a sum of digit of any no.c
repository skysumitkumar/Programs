#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,sum=0;
    printf("Enter a no=");
    scanf("%d",&n);
    while(n)// this is for all positive and negative no for only positive no we use n>0
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("sum=%d",sum);
}
