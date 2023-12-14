
//write a program to print the  min of two no's
// Error in condition statement expression are used  but here we use return  so it is error
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int a,int b);
int main(void)
{
    int a=10,b=5;
    printf("%d\n",min(a,b));
    return 0;
}
int min(int a,int b)
{
    a<b?return a:return b;      //yha condition operator  me expression ka use hota h but return koi expression nahi h
}                               // return a<b?a:b; isko asse use kar sakte h






