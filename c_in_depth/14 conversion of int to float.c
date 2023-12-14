#include<stdio.h>
void main()
{
    int a,b;
    float c;
    scanf("%d,%d",&a,&b);
    c=a/b;
    printf("c=%f\n",c);
    c=(float)a/b;
    printf("c=%f",c);
}

