#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows;
    printf("Enter for row: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows;
    printf("Enter rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows+1-i;j++)
            printf("*");
        printf("\n");
    }
}
*/





