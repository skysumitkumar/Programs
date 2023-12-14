#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,space,rows,p,t;
    printf("Enter no of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
            printf(" ");
        p=i;
        for(j=1;j<=i;j++)
            printf("%d",p++);
        p=p-2;
        for(j=1;j<=i-1;j++)
            printf("%d",p--);
        printf("\n");
    }
    for(i=rows-1;i>=1;i--)
    {
        for(space=1;space<=rows-i;space++)
        printf(" ");
        for(j=1;j<=i;j++)
            printf("%d",p++);
        p=p-2;
        for(j=1;j<=i-1;j++)
            printf("%d",p--);
        printf("\n");
    }
}
