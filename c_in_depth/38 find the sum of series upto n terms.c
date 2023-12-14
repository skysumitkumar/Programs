#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,no,r=0;
    printf("Enter a no where you want to sum: ");
    scanf("%d",&no);
    for(i=1,n=1;i<=no;i=i+n,n++)
    {
         printf("%d\n",i);
    r=r+i;
    }
   printf("%d",r);
}
