#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows,num=0;
    printf("Enter for row: ");
    scanf("%d",&rows);
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}



