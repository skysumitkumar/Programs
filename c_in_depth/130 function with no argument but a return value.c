//function with no argument but a return value
//print the sum of squares of all odd number from 1 to 25
#include<stdio.h>
#include<conio.h>
#include<math.h>
int func(void);
int main(void)
{
    printf("%d\n",func());
    return 0;
}
int func(void)
{
    int i,n=0;
    for(i=1;i<=25;i++)
    {
        if(i%2!=0)
        n=n+i*i;
    }
    printf("%d",n);
    //return n;
}
