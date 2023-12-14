#include<stdio.h>
#include<conio.h>
/*void main()// this program is wrong because when we enter 0 then it give a product 1
{
    int n,rem,prod=1;
    printf("Enter a no:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        prod=prod*rem;
        n=n/10;
    }
    printf("%d",prod);
}*/
void main()
{
    int n,rem,prod=1;
    printf("Enter a no:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d",0);
    }
    else
    {
      while(n>0)
    {
        rem=n%10;
        prod=prod*rem;
        n=n/10;
    }
    printf("%d",prod);
    }
}
