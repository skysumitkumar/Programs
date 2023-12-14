//write a function to input a no and multiply it till it gives one digit no and no of times it multiply to give one digit no it is called persistence of n
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int persistence(int n);
int root(int n);
int main(void)
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Root of n is: %d\n",root(n));

    printf("persistence of it is: %d",persistence(n));
}
int root(int n)
{
    int i,j=0,prod=1;
    for(i=1;n>9;i++)
    {
        j--;
        while(n>0)
        {
            prod*=n%10;
            n=n/10;
            j++;
        }
        n=prod;
        prod=1;
    }
    return n;
}
int persistence(int n)
{
    int i,j=0,prod=1;
    for(i=1;n>9;i++)
    {
        j--;
        while(n>0)
        {
            prod*=n%10;
            n=n/10;
            j++;
        }
        n=prod;
        prod=1;
    }
    return j;
}
