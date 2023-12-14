#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter a value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j<=n)
               printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}
