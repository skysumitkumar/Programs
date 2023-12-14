#include<stdio.h>
int main(void)
{
    int i,arr[5]={25,30,35,40,55},*p;
    p=arr;
    for(i=0;i<5;i++)
    {
        printf("%d ",*arr);
        arr++;
    }
    return 0;
}
