#include<stdio.h>
void func(int a[10]);
int main(void)
{
    int arr[10];
    func(arr);
    //printf("%d",arr[0]);
    return 0;
}
void func(int a[10])
{
    int b[10],x=5;
    a=&x;
    b=&x;
}
