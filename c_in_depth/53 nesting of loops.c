//just to understand the nesting of loops
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        printf("i=%d\n",i);
        for(j=1;j<=4;j++)
            printf("j=%d\t",j);
        pritf("\n");
    }
}
