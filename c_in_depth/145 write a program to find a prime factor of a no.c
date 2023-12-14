//write a program to find the prime factor of a no
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int pfact(int n);
int main(void)
{
    int n;
    printf("Enter the no that you want to find prime factor: ");
    scanf("%d",&n);
    printf("%d",pfact(n));
    return 0;
}
int pfact(int n)
{
    int i;
    for(i=2;n!=1;i++)
        while(n%i==0)
    {
        printf("%d",i);
        n=n/i;
    }
}
/*int pfact(int n)
{
    int i,j;
    do
    {
        for(i=2;i<=n;)
        {
            if(n%i==0)
            {
                for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                    printf(" ");
                else
                {
                    printf("%d",i);
                    n=n/i;
                }
            }
            }
            else
                i++;
        }
    }while(n>=1);
}*/
