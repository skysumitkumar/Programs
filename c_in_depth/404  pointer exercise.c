#include<stdio.h>
int main(void)
{
    int arr[3][4][5];
    printf("%p\t",arr);     //first three give the same address and forth give next address
    printf("%p\t",arr[0]);
    printf("%p\t",arr[0][0]);
    printf("%p\t",arr[0][0][0]);
    printf("%p\t",sizeof(arr));
    printf("%p\t",sizeof(arr[0]));
    printf("%p\t",sizeof(arr[0][0]));
    printf("%p\t",sizeof(arr[0][0][0]));
    return 0;
}
