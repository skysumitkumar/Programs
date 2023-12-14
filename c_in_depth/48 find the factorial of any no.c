#include<stdio.h>
#include<conio.h>
void main()
{
    int n,prod=1;
    printf("Enter a no=");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d",0);
    }
    else
    {
       while(n>0)
    {
        prod=prod*n;
        n--;
    }
    printf("factorial of %d is %d",n,prod);
    }

}
