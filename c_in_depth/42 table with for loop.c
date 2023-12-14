#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    printf("Enter a no which you wright table: ");
    scanf("%d",&j);
    for(i=1;i<=10;i++)
        printf("%d*%d=%d\n",j,i,i*j);
}
