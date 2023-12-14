// a number is perfect if the sum of all its positive proper divisors is equal to the number .write a recursive function that finds whether a number is perfect or not.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int perfectno(int);
int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(perfectno(n))
        printf("This is a perfect no");
    else
        printf("This no is not a perfect no");
}
int perfectno(int n)
{
    static int i=1,sum=0;
    if(i==n)
    {
        if(sum==n)
            return 1;
        else
            return 0;
    }
        if(n%i==0)
        sum+=i;
        i++;
        perfectno(n);
}
