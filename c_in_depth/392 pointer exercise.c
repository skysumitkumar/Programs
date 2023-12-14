#include<stdio.h>
int main(void)
{
    int i,arr[4]={25,30,35,40};
    int x=100,*ptr=arr;
    printf("%p %d %d\n",ptr,*ptr,x);
    x=*ptr++;
    printf("%p %d %d\n",ptr,*ptr,x);
    x=*++ptr;
    printf("%p %d %d\n",ptr,*ptr,x);
    x=++*ptr;
    printf("%p %d %d\n",ptr,*ptr,x);
    x=*(ptr)++;
    printf("%p %d %d\n",ptr,*ptr,x);
    return 0;
}

