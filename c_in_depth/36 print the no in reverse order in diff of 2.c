#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter range: ");
    scanf("%d",&n);
    for(i=n;i>=0;i-=2)
    {
        printf("%d",i);
        printf("\n");
    }
}
