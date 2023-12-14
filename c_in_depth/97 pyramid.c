#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,space,rows,p;
    printf("Enter for rows: ");
    scanf("%d",&rows);
    p=rows;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=i-1;space++)
            printf(" ");
        for(j=1;j<=rows-i+1;j++)
            printf("%d",p++);
            p=p-2;
        for(j=1;j<=rows-i;j++)
            printf("%d",p--);
        printf("\n");
    }

}

