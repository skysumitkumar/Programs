//Rewrite the function without using a else
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int ispalindrome(int num);
int main(void)
{
    int n,b;
    printf("Enter a number : ");
    scanf("%d",&n);
    scanf("%d",&b);

    printf("%d ",func(n,b));
    return 0;
}
int ispalindrome(int num);
{
    if(num==reverse(num))
        return 1;
    return 0;
}

