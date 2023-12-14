#include<stdio.h>
#include<conio.h>
/*void main()
{
    int a,b,q,r;
    scanf("%d,%d",&a,&b);
    if(a)
    {


        q=a/b;
        r=a%b;
        printf("quotient is =%d\n,remainder is =%d",q,r);
    }
    else
        printf("it is zero ");

}*/
void main()
{
    int a,b,q,r;
    scanf("%d%d",&a,&b);
    if(!a)
        printf("it is zero ");
    else
    {
        q=a/b;
        r=a%b;
        printf("quotient is =%d\nremainder is =%d",q,r);
    }



}

