#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows,sum;
    printf("Enter for row: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum=i+j;
            if(sum%2==0)
                printf("%d",1);
            else
                printf("%d",0);
        }
        printf("\n");
    }
}

