#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows;
    printf("Enter no of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
