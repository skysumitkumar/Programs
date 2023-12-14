//write a function to find a no is perfect no or not if it is so sum of its proper divisors is no itself and find two no is amicable or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int amicableno(int a,int b);
int sumdivisor(int a,int b);
int main(void)
{
    int a,b;
    printf("Enter a no: ");
    scanf("%d%d",&a,&b);
    amicableno(a,b);
}
int sumdivisor(int a,int b)
{
    int i,sum1=0,sum2=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
            sum1+=i;
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
            sum2+=i;
    }
    if(sum1==b&&sum2==a)
        return 1;
    return 0;
}
int amicableno(int a,int b)
{
    int i,sum1=0,sum2=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
            sum1+=i;
    }
    if(sum1==a)
    printf("%d,is a perfect no:\n",a);
    else
        printf("%d,is not a perfect no:\n",a);
    for(i=1;i<b;i++)
    {
        if(b%i==0)
            sum2+=i;
    }
    if(sum2==b)
    printf("%d,is a perfect no:\n",b);
    else
        printf("%d,is not a perfect no:\n",b);
    if(sum1==b&&sum2==a)
        printf("These are amicable no:\n");
    else
    printf("These are not a amicable no:\n");
}
