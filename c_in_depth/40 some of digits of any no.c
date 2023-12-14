#include<stdio.h>
#include<conio.h>
void main()
{
    int b=0,n,rem;
    printf("Enter a no:");
    scanf("%d",&n);
    for( ;n>0;n/=10)
    {
        rem=n%10;
        b=b+rem;

    }
    printf("%d",b);
}
