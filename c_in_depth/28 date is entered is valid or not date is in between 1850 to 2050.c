#include<stdio.h>
#include<conio.h>
void main()
{
    int d,m,y;
    printf("Enter the date: ");
    scanf("%d%c%d%c%d",&d,&m,&y);
    if(d>=1||m>=1||y>=1850 )
    {
        printf("date is valid");
    }
    printf("date is invalid");
}
