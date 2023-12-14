#include<stdio.h>
#include<conio.h>
//Error on my program retry next time when see
/*void main()
{
    long int n,i,rem,sum=0;
    printf("Enter a no");
    scanf("%d",&n);
    while(n!=0)
    {
        while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
    }
}*/
void main()
{
    long n;
    int rem,sum;
    printf(("Enter a number :"));
    scanf("%ld",&n);
    printf("%ld",n);
    do
    {
        sum=0;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;

        }
        printf(" %d\t",sum);
        num=sum;
    }while(n/10!=0);
}
