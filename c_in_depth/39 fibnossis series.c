#include<stdio.h>
#include<conio.h>
void main()
{
    int x=1,a=1,b=0,c;
    printf("%d\n",a);
    for(x=1;x<=50;x++)
    {

        c=a+b;
        b=a;
        a=c;
        printf("%d\n",c);
    }


}
