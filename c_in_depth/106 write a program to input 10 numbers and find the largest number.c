//write a program to input 10 numbers and find the largest number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,mx;
    printf("Enter no's: ");
    scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    if(n1>n2&&n1>n3&&n1>n4&&n1>n5&&n1>n6&&n1>n7&&n1>n8&&n1>n9&&n1>n10)
    printf("%d",n1);
    else if(n2>n3&&n2>n4&&n2>n5&&n2>n6&&n2>n7&&n2>n8&&n2>n9&&n2>n10)
        printf("%d",n2);
    else if(n3>n4&&n3>n5&&n3>n6&&n3>n7&&n3>n8&&n3>n9&&n3>n10)
        printf("%d",n3);
    else if(n4>n5&&n4>n6&&n4>n7&&n4>n8&&n4>n9&&n4>n10)
        printf("%d",n4);
    else if(n5>n6&&n5>n7&&n5>n8&&n5>n9&&n5>n10)
        printf("%d",n5);
    else if(n6>n7&&n6>n8&&n6>n9&&n6>n10)
        printf("%d",n6);
    else if(n7>n8&&n7>n9&&n7>n10)
        printf("%d",n7);
    else if(n8>n9&&n8>n10)
        printf("%d",n8);
    else if(n9>n10)
        printf("%d",n9);
    else
        printf("%d",n10);
}
