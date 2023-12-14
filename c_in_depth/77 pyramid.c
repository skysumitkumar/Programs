#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows,num=0;
    printf("Enter for row: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            num++;
                printf("%d",num);
        }
        printf("\n");
    }
}


