#include<stdio.h>
int main(void)
{
    int a[2][3];
    a[1][2]=9;
    printf("%d\n",a[1,2]);//we cant use this type of thing to print the index value of the array
    return 0;
}
