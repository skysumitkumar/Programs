#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,sum=0,i=1;
    printf("Enter a binary no=");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*i;
        i=i*2;
        n=n/10;
    }
    printf("%d",sum);
}

