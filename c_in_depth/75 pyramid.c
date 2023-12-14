#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows;
    printf("Enter for row: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i+j);
        }
        printf("\n");
    }
}

