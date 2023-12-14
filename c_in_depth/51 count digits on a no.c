#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=0;
    printf("Enter a no=");
    scanf("%d",&n);
    do
    {
        n=n/10;
        i++;
    }while(n>0);
    printf("%d",i);
}
