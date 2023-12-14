//write a function to print Bareilly with the help of goto
//we cant use goto in the function it give error because ab is a undefined label
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(void);
int main(void)
{
    printf("Lucknow\n");
    goto ab;
    return 0;
}
void func(void)
{
    ab;
    printf("Bareilly\n");
}





