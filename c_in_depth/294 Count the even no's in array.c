//Count the even no's in array
#include<stdio.h>
int main(void)
{
    int arr[10]={1,2,3,4,8,10};
    printf("%d\n",func(arr,6));
    return 0;
}
int func(int arr[],int size)
{
    if(size==0)
        return 0;
    else if(arr[size-1]%2==0)
        return 1+func(arr,size-1);
    else
        return func(arr,size-1);
}
