/*   * * * * *
      * * * * *
     * * * * *
      * * * * *
     * * * * *         */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
/*int main(void)
{
    int i,j,space;
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        printf(" ");
        for(j=1;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}*/
/*int main(void)
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
           printf("*");
        }
        printf("\n");
    }

}*/
int main(void)
{
    int i,j,space;
    for(i=1;i<=7;i++)
    {
        if(i==1)
                printf("*");
        for(j=1;j<=7;j++)
        {
            if(i%2==0)
            {
                printf(" ");
            }
            else if(i>1)
                if(j==1||j==7)
                printf("*");
                else
                    printf(" ");
        }
            printf("\n");

    }

}
