#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    long int n,rn,sn=0,no;
    for(n=1000;n<10000;n++)
    {
        no=n;
        sn=0;
        while(no>0)
        {
           rn=no%10;
        sn=sn*10+rn;
        no=no/10;
        }
        if(sn==n)
            printf("%ld\n",sn);
    }
}

