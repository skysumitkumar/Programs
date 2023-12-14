//write a function to find a no is amicablen or not
//two diff no is called amicable no is that no if the sum of the proper  divisor of each is equal to the other no
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
    if(sumdivisor(a,b))
        printf("It is amicable no:");
        else
    printf("It is not a amicable no:");
}
