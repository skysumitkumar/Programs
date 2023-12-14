#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,sum=0,c,num;
    printf("Enter a no: ");
    scanf("%d",&n);
    num=n;//most important step
    while(n>0)
    {
        rem=n%10;
        c=rem*rem*rem;
        sum=sum+c;
        n=n/10;
    }
    if(num==sum)
        printf("It is Armstrong number");
    else
        printf("It is not a Armstrong number");
}
