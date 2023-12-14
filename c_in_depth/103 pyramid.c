#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,rows,p,space;
    printf("Enter no of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
            printf(" ");
            p=rows;
        for(j=1;j<=i;j++)
            printf("%d",p--);
            p=p+2;
            for(j=1;j<=i-1;j++)
                printf("%d",p++);
            printf("\n");
    }
    for(i=1;i<=rows-1;i++)
    {
        for(space=1;space<=i-1;space++)
            printf(" ");
        p=p-1;
        for(j=1;j<=rows-i;j++)
            printf("%d",p--);
            p=p+2;
            for(j=1;j<=rows-i-1;j++)
                printf("%d",p++);
                printf("\n");
    }
}
