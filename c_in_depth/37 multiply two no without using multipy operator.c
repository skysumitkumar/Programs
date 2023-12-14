#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,m,r=0;
    m=1;
    printf("Enter two no's: ");
    scanf("%d,%d",&a,&b);
    for(m=1;m<=b;m++)
        r=r+a;
    printf("%d*%d=%d",a,b,r);

}
