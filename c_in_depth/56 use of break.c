#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    for(n=1;n<=5;n++)
    {
        if(n==3)
            break;
        printf("number=%d\n",n);
    }
    printf("out of for loop\n");

}
