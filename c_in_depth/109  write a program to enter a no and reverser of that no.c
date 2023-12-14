// write a program to enter a no and then print its reverse,and count the digits
//problem in it for long no
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    int i,n,rn,no=0;
    printf("Enter a no:");
    scanf("%d",&n);
    while(n>1)
    {
        if(n<0)
            printf("0");
        else
        {
            for(i=0;n>0;i++)
            {
                rn=n%10;
            no=no*10+rn;
            n=n/10;
            }

        }

    }
    printf("counted digits:%d ",i);
    printf("\nreverse no:%d ",no);
}
