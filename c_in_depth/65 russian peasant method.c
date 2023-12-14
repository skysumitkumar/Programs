#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,sum=0;
    printf("Enter 1st no");
    scanf("%d",&n1);
    printf("Enter 2nd no");
    scanf("%d",&n2);
    do
    {
        if(n1%2!=0)
        {
            sum=sum+n2;
        }
        n1=n1/2;
        n2=n2*2;
    }while(n1>=1);
    printf("%d",sum);
}
